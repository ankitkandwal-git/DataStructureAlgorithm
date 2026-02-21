#include<bits/stdc++.h>
using namespace std;

int searchRotatedArray(int n , int key, vector<int>&arr){
    int low = 0;
    int high = n-1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==key){
            return mid;
        }else if(arr[mid]<=arr[high]){
            if(arr[mid]<=key && key<=arr[high]){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        else{
            if(arr[low] <= arr[mid]){
                if(arr[low]<=key && key<=arr[mid]){
                    high = mid-1;
                }else{
                    low = mid+1;
                }
            }
        }
    }
    return -1;
}
int main(){
    int n,key;
    cin>>n>>key;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = searchRotatedArray(n,key,arr);
    cout<<ans<<endl;
    return 0;
}
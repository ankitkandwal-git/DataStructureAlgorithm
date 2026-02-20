#include<bits/stdc++.h>
using namespace std;

int binarySearch(vector<int>&arr,int n , int target){
    int low = 0;
    int high = arr.size()-1;
    while(low<=high){
        int mid = low+ (high-low)/2;
        if(arr[mid]==target){
            return mid;
        }
        else if(arr[mid]>target){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
}

int main(){
    int n,target;
    cin>>n>>target;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = binarySearch(arr,n,target);
    if(ans==-1){
        cout<<"Element not found in the array"<<endl;
    }
    else{
        cout<<"Element found at index: "<<ans<<endl;
    }
    return 0;
}
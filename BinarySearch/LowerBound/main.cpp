#include<bits/stdc++.h>
using namespace std;

int lowerBound(int arr[],int n , int x){
    int low =  0;
    int high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]>=x){
            ans = mid;
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
    return ans;
}
int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = lowerBound(arr,n,x);
    if(ans==-1){
        cout<<"Element not found in the array"<<endl;
    }else{
        cout<<"Lower bound of "<<x<<" is at index "<<ans<<endl;
    }
    return 0;
}
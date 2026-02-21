#include<bits/stdc++.h>
using namespace std;

int searchInsert(vector<int>&arr,int n,int x){
    int low = 0,high = n-1;
    int ans = -1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]>=x) {
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
    vector<int>arr(n);
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<searchInsert(arr,n,x)<<endl;
}
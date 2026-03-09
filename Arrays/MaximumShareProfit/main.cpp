#include<bits/stdc++.h>
using namespace std;

int maxProfit(int n,vector<int>&arr){
    int ans = 0;
    int i = 0;
    for(int j=0;j<n;j++){
        if(arr[j]<arr[i]){
            i = j;
        }
        ans = max(ans,arr[j]-arr[i]);
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<maxProfit(n,arr)<<endl;
}
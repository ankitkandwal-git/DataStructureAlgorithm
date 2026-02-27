#include<bits/stdc++.h>
using namespace std;

vector<int>findkeyElement(vector<int>&arr,int key){
    int n = arr.size();
    vector<int>ans;
    int res = 0;
    if(n>0){
        ans.push_back(arr[n-1]);
    }
    for(int i=n-2;i>=0;i--){
        res+=arr[i+1];
        if(arr[i]-res>key){
            ans.push_back(arr[i]);
        }
    }
    reverse(ans.begin(),ans.end());
    return ans;
}
int main(){
    int n,key;
    cin>>n>>key;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans = findkeyElement(arr,key);
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
}
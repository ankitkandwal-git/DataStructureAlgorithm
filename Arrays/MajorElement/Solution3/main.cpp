#include<bits/stdc++.h>
using namespace std;

int majorElement(vector<int>&arr){
    int n = arr.size();
    map<int,int>mp;
    for(int i=0;i<n;i++){
        mp[arr[i]]++;
    }
    for(auto i :mp){
        if(i.second>n/2){
            return i.first;
        }
    }
    return -1;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<majorElement(arr)<<endl;
}
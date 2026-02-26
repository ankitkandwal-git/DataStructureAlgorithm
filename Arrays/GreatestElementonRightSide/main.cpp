#include<bits/stdc++.h>
using namespace std;

vector<int>greatestOnRightSide(vector<int>&arr){
    int n = arr.size();
    int maxi = -1;
    for(int i=n-1;i>=0;i--){
        int cur = arr[i];
        maxi = arr[i];
        if(cur>maxi){
            maxi = cur;
        }
    }
    return arr;
}
int main(){
    vector<int>arr = {16,17,4,3,5,2};
    vector<int>ans = greatestOnRightSide(arr);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
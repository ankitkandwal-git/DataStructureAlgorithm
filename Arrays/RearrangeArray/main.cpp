#include<bits/stdc++.h>
using namespace std;

vector<int>rearrangeArray(vector<int>&nums){
    int n = nums.size();
    vector<int>ans(n);
    int pos = 0, neg = 1;
    for(int i=0;i<n;i++){
        if(nums[i]>0){
            ans[pos] = nums[i];
            pos+=2;
        }
        else{
            ans[neg] = nums[i];
            neg+=2;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    vector<int>ans = rearrangeArray(nums);
    for(int i=0;i<n;i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}
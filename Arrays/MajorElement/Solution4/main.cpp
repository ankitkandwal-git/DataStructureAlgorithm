#include<bits/stdc++.h>
using namespace std;

int majorElement(vector<int>&nums){
    int leader = nums[0];
    int major = 1;
    int n = nums.size();
    for(int i=1;i<n;i++){
        if(major==0){
            leader = nums[i];
            major = 1;
        }
        else if(nums[i]==leader){
            major++;
        }
        else{
            major --;
        }
    }
    return leader;
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<majorElement(nums)<<endl;
    return 0;
}
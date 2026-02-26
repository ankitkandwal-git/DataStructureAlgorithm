#include<bits/stdc++.h>
using namespace std;

int wiggleSequence(vector<int>&nums){
    int n = nums.size();
    if(n<2) return n;
    int up = 1 , down = 1;
    for(int i=-1;i<n;i++){
        if(nums[i]>nums[i-1]) up = down +1;
        else if (nums[i]<nums[i-1])  down = up +1;
    }
    return max(up,down);
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++) cin>>nums[i];
    cout<<wiggleSequence(nums);
    return 0;
}
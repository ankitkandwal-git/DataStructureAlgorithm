#include<bits/stdc++.h>
using namespace std;

int majorityElemennt(vector<int>&nums){
    int n = nums.size();
    int leader = nums[0];
    int major = 1;
    for(int i=1;i<n;i++){
        int count = 0;
        for(int j=0;j<n;j++){
            if(nums[j] == nums[i]){
                count ++;
            }
        }
        if(count>n/2) return nums[i];
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    cout<<majorityElemennt(nums)<<endl;
    return 0;
}
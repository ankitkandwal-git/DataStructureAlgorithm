#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>&nums){
    sort(nums.begin(),nums.end()); 
    int n = nums.size();
    int count = 1;
    if(n==0) return 0;
    if(n==1) return 1;
    int ans = 0;
    for(int i=1;i<n;i++){
        if(nums[i]-nums[i-1]==1){
            count++;
            ans = max(ans,count);
        }
        else if(nums[i]-nums[i-1]==0) continue;
        else count = 1;
    }
    return ans;
}

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;
    vector<int>nums(n);
    cout<<"Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    int result = longestConsecutive(nums);
    cout<<"The length of the longest consecutive sequence is: "<<result<<endl;
}
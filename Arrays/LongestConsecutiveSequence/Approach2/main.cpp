#include<bits/stdc++.h>
using namespace std;

int longestConsecutive(vector<int>&nums){
    int n = nums.size();
    unordered_set<int>s;
    if(n==0) return 0;
    if(n==1) return 1;
    for(int i=0;i<n;i++){
        s.insert(nums[i]);
    }
    int count = 1, ans =0;
    for(auto it:s){
        if(s.find(it-1)==s.end()){
            count = 1;
            int x  = it+1;
            while(s.find(x)!=s.end()){
                count++;
                x++;
            }
            ans = max(ans, count);
        }
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
    int ans = longestConsecutive(nums);
    cout<<"The length of the longest consecutive sequence is: "<<ans<<endl;
}
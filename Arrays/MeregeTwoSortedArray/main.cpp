#include<bits/stdc++.h>
using namespace std;

void merge(vector<int>&num1,int m,vector<int>&num2,int n){
    int i = m-1;
    int j = n-1;
    vector<int>ans(m+n);
    int k = m+n-1;
    while(i>=0 && j>=0){
        if(nums[i] > nums[j]){
            ans[k--] = nums[i--];
        }
        else{
            ans[k--] = nums[j--];   
        }
    }
}
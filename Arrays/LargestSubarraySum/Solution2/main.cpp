#include<bits/stdc++.h>
using namespace std;

int largestSubarraySum(vector<int>&arr){
    int n = arr.size();
    int maxSum = INT_MIN;
    int currentSum = 0;
    for(int i=0;i<n;i++){
        currentSum += arr[i];
        maxSum = max(maxSum,currentSum);
        if(currentSum<0){
            currentSum = 0;
        }
    }
    return maxSum;
}

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<largestSubarraySum(arr)<<endl;
    return 0;
}
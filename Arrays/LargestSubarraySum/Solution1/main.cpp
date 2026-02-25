#include<bits/stdc++.h>
using namespace std;

int largestSubarraySum(vector<int>&arr){
    int n = arr.size();
    int maxSum = INT_MIN;
    for(int i=0;i<n;i++){
        int sum = 0;
        for(int j=i;j<n;j++){
            sum +=arr[j];
            maxSum = max(maxSum,sum);
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
#include<bits/stdc++.h>
using namespace std;

int upperBound(int arr[],int n, int x){
    int low = 0, high = n-1;
    int ans = -1;
    while(low <= high){
        int mid = low + (high-low)/2;
        if(arr[mid] > x){
            ans = mid;
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<upperBound(arr,n,x)<<endl;
    return 0;
}
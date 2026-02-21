#include<bits/stdc++.h>
using namespace std;

int ceilFloor(int arr[],int n, int x){
    int low = 0;
    int high = n-1;
    int ans = 1;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==x) return arr[mid];
        else if(arr[mid]<=x){
            ans = arr[mid];
            high = mid-1;
        }else{
            low = mid+1;
        }
    }
}
int main(){
    int n,x;
    cin>>n>>x;
    int arr[n];
    for(int i=0;i<n;i++) cin>>arr[i];
    cout<<ceilFloor(arr,n,x)<<endl;
}
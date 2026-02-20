#include<bits/stdc++.h>
using namespace std;

int peekElement(int arr[], int n){
    int low = 0;
    int high = n-1;
    while(low<high){
        int mid = low + (high-low)/2;
        if(arr[mid]<arr[mid+1]){
            low = mid+1;
        }else{
            high = mid;
        }
    }
    return low;
}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<peekElement(arr,n)<<endl;
    return 0;
}
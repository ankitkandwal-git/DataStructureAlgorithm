#include<bits/stdc++.h>
using namespace std;

int mergeSort(int left,int right,vector<int> &arr){
    if(left>=right) return 0;
    int mid = left + (right-left)/2;
    int inv = mergeSort(left,mid,arr);
    inv += mergeSort(mid+1,right,arr);
    vector<int> temp;
    int i=left,j=mid+1;
    while(i<=mid && j<=right){
        if(arr[i]<=arr[j]){
            temp.push_back(arr[i]);
            i++;
        }
        else{
            temp.push_back(arr[j]);
            j++;
            inv += (mid-i+1);
        }
    }
    while(i<=mid){
        temp.push_back(arr[i]);
        i++;
    }
    while(j<=right){
        temp.push_back(arr[j]);
        j++;
    }
    for(int k=left;k<=right;k++){
        arr[k] = temp[k-left];
    }
    return inv;

}

int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mergeSort(0,n-1,arr)<<endl;
    return 0;
}
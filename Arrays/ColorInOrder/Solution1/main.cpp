#include<bits/stdc++.h>
using namespace std;

void colorInOrder(vector<int>&arr){
    int n = arr.size();
    int count[n] = {0};
    for(int i=0;i<n;i++){
        count[arr[i]]++;
    } 
    for(int i=0;i<n;i++){
        if(i<count[0]){
            arr[i] = 0;
        }
        else if(i<count[0]+count[1]){
            arr[i] = 1;
        }
        else{
            arr[i] = 2;
        }
    }
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    colorInOrder(arr);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
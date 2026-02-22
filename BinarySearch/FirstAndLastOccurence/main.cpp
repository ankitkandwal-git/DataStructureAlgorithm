#include<bits/stdc++.h>
using namespace std;

vector<int>first(vector<int>&arr,int n , int key){
    int low = 0;
    int high = n-1;
    vector<int>ans(2,-1);
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==key){
            ans[0] = mid;
            high = mid-1;
        }
        else if(arr[mid]>key){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
vector<int>last(vector<int>&arr,int n , int key){
    int low = 0;
    int high = n-1;
    vector<int>ans(2,-1);
    while(low<=high){
        int mid = low + (high-low)/2;
        if(arr[mid]==key){
            ans[1] = mid;
            low = mid+1;
        }
        else if(arr[mid]>key){
            high = mid-1;
        }
        else{
            low = mid+1;
        }
    }
    return ans;
}
int main(){
    int n;
    cin>>n;
    vector<int>arr(n);
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    vector<int>ans1 = first(arr,n,key);
    vector<int>ans2 = last(arr,n,key);
    if(ans1[0]==-1){
        cout<<"Element not found";
    }
    else{
        cout<<"First Occurence : "<<ans1[0]<<endl;
        cout<<"Last Occurence : "<<ans2[1]<<endl;
    }
    return 0;
}
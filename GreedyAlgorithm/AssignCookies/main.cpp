#include<bits/stdc++.h>
using namespace std;

int assignCookies(vector<int>&greed,vector<int>&size){
    sort(greed.begin(),greed.end());
    sort(size.begin(),size.end());
    int i=0,j=0;
    while(i<greed.size() && j<size.size()){
        if(size[j]>=greed[i]){
            i++;
            j++;
        }
        else{
            j++;
        }
    }
    return i;
}

int main(){
    int m;
    cout<<"Enter the number of children: ";
    cin>>m;
    vector<int>greed(m);
    cout<<"Enter the greed factor of each child: ";
    for(int i=0;i<m;i++){
        cin>>greed[i];
    }
    int n;
    cout<<"Enter the number of cookies: ";
    cin>>n;
    vector<int>size(n);
    cout<<"Enter the size of each cookie: ";
    for(int i=0;i<n;i++){
        cin>>size[i];
    }
    int result=assignCookies(greed,size);
    cout<<"The maximum number of children that can be contented is: "<<result<<endl;
    return 0;
}
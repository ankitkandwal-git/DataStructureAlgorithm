#include<bits/stdc++.h>
using namespace std;

bool jumpGame(vector<int>&steps){
    int n = steps.size();
    int maxReach = 0;
    for(int i=0;i<n && i<=maxReach;i++){
        maxReach = max(maxReach,i+steps[i]);
        if(maxReach >=n-1)return true;
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter the number of steps: ";
    cin>>n;
    vector<int>steps(n);
    cout<<"Enter the steps: ";
    for(int i=0;i<n;i++){
        cin>>steps[i];
    }
    if(jumpGame(steps)){
        cout<<"You can reach the end of the array."<<endl;
    }else{
        cout<<"You cannot reach the end of the array."<<endl;
    }
    return 0;
}
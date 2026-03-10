#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>pascalTriangle(int n){
    vector<vector<int>>ans = {{1},{1,1}};
    vector<int>prev = {1,1};
    if(n==1) return {{1}};
    if(n==2) return {{1},{1,1}};
    for(int i=3;i<=n;i++){
        vector<int>cur(i);
        cur[0] = 1;
        cur[i-1] = 1;
        for(int j=1;j<i-1;j++){
            cur[j] = prev[j-1]+prev[j];
        }
        ans.push_back(cur);
        prev = cur;
    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<vector<int>>ans = pascalTriangle(n);
    cout<<"Pascal Triangle of "<<n<<" rows is: "<<endl;
    for(auto i:ans){
        for(auto j:i){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
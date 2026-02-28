#include<bits/stdc++.h>
using namespace std;

vector<vector<int>>rotateGrid(vector<vector<int>>&grid){
    int n = grid.size();
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            swap(grid[i][j],grid[j][i]);
        }
    }
    for(int i=0;i<n;i++){
        reverse(grid[i].begin(),grid[i].end());
    }
    return grid;
}
int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>>grid(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>grid[i][j];
        }
    }
    vector<vector<int>>ans = rotateGrid(grid);
    cout<<endl; 
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
}
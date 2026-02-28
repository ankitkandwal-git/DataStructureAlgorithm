#include<bits/stdc++.h>
using namespace std;

vector<int>sprialMatrix(vector<vector<int>>&matrix){
    vector<int>ans;
    int m = matrix.size();
    int n = matrix[0].size();
    int pos = 0;
    int row = 0;
    int col = 0;
    vector<int>row_delta = {0,1,0,-1};
    vector<int>col_delta = {1,0,-1,0};
    while(ans.size() != m*n){
        ans.push_back(matrix[row][col]);
        matrix[row][col] = 10000;
        int next_row = row + row_delta[pos];
        int next_col = col + col_delta[pos];
        if(next_row>=m || next_row<0 || next_col>=n || next_col<0 || matrix[next_row][next_col] == 10000){
            pos = (pos+1)%4;
        }
        row += row_delta[pos];
        col += col_delta[pos];
    }
    return ans;
}

int main(){
    int m,n;
    cin>>m>>n;
    vector<vector<int>>matrix(m,vector<int>(n));
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>matrix[i][j];
        }
    }
    vector<int>ans = sprialMatrix(matrix);
    for(int i:ans){
        cout<<i<<" ";
    }
    cout<<endl;
}
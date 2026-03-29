#include<bits/stdc++.h>
using namespace std;

int binaryToDecimal(string str){
    int ans = 0;
    int n = str.size();
    int prod = 1;
    for(int i=n-1;i>=0;i--){
        if(str[i] =='1'){
            ans += prod;
        }
        prod *= 2;
    }
    return ans;
}

int main(){
    string str;
    cin >> str;
    cout << binaryToDecimal(str) << endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

string largestCommonPrefix(vector<string>&str){
    int k = 0;
    int n = str.size();
    if(n==0) return "";
    if(n==1) return str[0];
    while(true){
        for(int i=1;i<n;i++){
            if(k==str[i].size() || k==str[0].size()){
                return str[0].substr(0,k);
            }
            if(str[i][k] != str[0][k]){
                return str[0].substr(0,k);
            }
        }
        k++;
    }
}
int main(){
    int n;
    cout<<"Enter the number of strings: ";
    cin>>n;
    vector<string>str(n);
    cout<<"Enter the strings: "<<endl;
    for(int i=0;i<n;i++){
        cin>>str[i];
    }
    cout<<largestCommonPrefix(str)<<endl;
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

int longestSubString(string s){
    int n = s.size();
    int i=0,maxi = 0;
    unordered_map<char, int> m;
    for(int j=0;j<n;j++){
        if(m.find(s[j])==m.end()){
            if(m[s[j]]>=i){
                i = m[s[j]]+1;
            }
        }
        m[s[j]] = j;
        maxi = max(maxi,j-i+1);
    }
    return maxi;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<"The longest substring without repeating characters is: "<<longestSubString(s)<<endl;
    return 0;
}
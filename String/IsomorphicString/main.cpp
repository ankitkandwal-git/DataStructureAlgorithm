#include<bits/stdc++.h>
using namespace std;

bool isIsomorphic(string s1,string s2){
    int n = s1.size();
    if(s1.size() != s2.size()) return false;
    unordered_map<char,char>m;
    for(int i=0;i<n;i++){
        if(m.find(s1[i])==m.end()){
            m[s1[i]] = s2[i];
        }
        else if(m[s1[i]] != s2[i]){
            return false;
        }
    }
    return true;
}

int main(){
    string s1,s2;
    cout<<"Enter the first string: ";
    cin>>s1;
    cout<<"Enter the second string: ";
    cin>>s2;
    if(isIsomorphic(s1,s2)){
        cout<<"The strings are isomorphic."<<endl;
    }
    else{
        cout<<"The strings are not isomorphic."<<endl;
    }
}
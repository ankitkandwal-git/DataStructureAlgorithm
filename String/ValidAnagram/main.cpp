#include<bits/stdc++.h>
using namespace std;

bool validAnagram(string s, string t){
    if(s.size() != t.size()) return false;
    unordered_map<char,int>mp;
    for(int i=0; i<s.size(); i++){
        mp[s[i]]++;
        mp[t[i]]--;
    }
    for(auto it: mp){
        if(it.second != 0) return false;
    }
    return true;

}
int main(){
    string s, t;
    cout<<"Enter first string: ";
    cin>>s;
    cout<<"Enter second string: ";
    cin>>t;
    if(validAnagram(s,t)){
        cout<<"The strings are anagrams."<<endl;
    }else{
        cout<<"The strings are not anagrams."<<endl;
    }
    return 0;
}
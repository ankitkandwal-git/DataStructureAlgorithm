#include<bits/stdc++.h>
using namespace std;

string reverseString(string s){
    stringstream ss(s);
    vector<string>words;
    string word;
    while(ss>>word){
        words.push_back(word);
    }
    int n = words.size();
    string ans;
    for(int i=n-1;i>=0;i--){
        ans+=words[i] + " ";
    }
    ans.pop_back();
    return ans;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    getline(cin,s);
    cout<<"Reversed string: "<<reverseString(s)<<endl;
    return 0;
}
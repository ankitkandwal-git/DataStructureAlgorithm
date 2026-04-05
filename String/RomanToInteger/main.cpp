#include<bits/stdc++.h>
using namespace std;

int romanToInt(string s){
    unordered_map<char,int>m;
    m['I']=1;
    m['V']=5;
    m['X']=10;
    m['L']=50;
    m['C']=100;
    m['D']=500;
    m['M']=1000;
    int n = s.size();
    int ans = 0;
    int prev = m[s[n-1]];
    ans = prev;
    for(int i=n-2;i>=0;i--){
        int cur = m[s[i]];
        if(cur>=prev){
            ans +=cur;
        }
        else{
            ans -=cur;
        }
        prev = cur;
    }
    return ans;
}
int main(){
    string s;
    cout<<"Enter a Roman numeral: ";
    cin>>s;
    int result = romanToInt(s);
    cout<<"The integer value of "<<s<<" is: "<<result<<endl;
    return 0;
}
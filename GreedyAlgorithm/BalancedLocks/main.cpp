#include<bits/stdc++.h>
using namespace std;

bool balancedLocks(string s){
    int low = 0, high = 0;
    for(auto c:s){
        if(c=='(') low++,high++;
        else if(c==')') low--,high--;
        else if(c=='*') low--,high++;
        if(low==-1) low=0;
        if(high==-1) return false;
    }
    return low==0;
}
int main(){
    string s;
    cout<<"Enter the string of locks: ";
    cin>>s;
    if(balancedLocks(s)) cout<<"The locks are balanced."<<endl;
    else cout<<"The locks are not balanced."<<endl;
}
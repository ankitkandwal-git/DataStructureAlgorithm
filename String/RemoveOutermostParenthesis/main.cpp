#include<bits/stdc++.h>
using namespace std;

string removeOuterParentheses(string s){
    string ans;
    int count = 0;
    for(char c:s){
        if(c=='('){
            if(count !=0) ans.push_back(c);
            count++;
        }
        else{
            count--;
            if(count !=0) ans.push_back(c);
        }
    }
    return ans;
}
int main(){
    string s;
    cout<<"Enter the string: ";
    cin>>s;
    cout<<"The string after removing the outermost parentheses is: "<<removeOuterParentheses(s)<<endl;
    return 0;
}
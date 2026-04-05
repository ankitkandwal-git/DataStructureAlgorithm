#include<bits/stdc++.h>
using namespace std;

int maxDepth(string s){
    int count = 0,depth =0;
    for(auto c:s){
        if(c=='('){
            count++;
            depth = max(depth,count);
        }
        else if(c==')'){
            count--;
        }
    }
    return depth;
}
int main(){
    string s;
    cout<<"Enter the string of parentheses: ";
    cin>>s;
    cout<<"The maximum nesting depth of the parentheses is: "<<maxDepth(s)<<endl;
    return 0;
}
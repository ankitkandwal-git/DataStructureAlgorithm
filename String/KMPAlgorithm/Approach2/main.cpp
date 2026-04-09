#include<bits/stdc++.h>
using namespace std;

int help(string pattern,vector<int>&lps){
    int n = pattern.size(),i=0,j=1;
    lps[0] = 0;
    while(j<n){
        if(pattern[i]==pattern[j]){
            lps[j] = i+1;
            i++;
            j++;
        }
        else{
            if(i==0){
                lps[j] = 0;
                j++;
            }else{
                i = lps[i-1];
            }
        }
    }
}
int KMP(string text,string pattern){
    int m = text.size(),n = pattern.size();
    vector<int>lps(n);
    help(pattern,lps);
    int i=0,j=0;
    while(i<m){
        if(text[i]==pattern[j]){
            i++;
            j++;
        }
        else{
            if(j==0){
                i++;
            }else{
                j = lps[j-1];
            }
        }
        if(j==n){
            return i-j;
        }
    }
    return -1;
}
int main(){
    string text,pattern;
    cout<<"Enter the text: ";
    cin>>text;
    cout<<"Enter the pattern: ";
    cin>>pattern;
    int index = KMP(text,pattern);
    if(index==-1){
        cout<<"Pattern not found in the text."<<endl;
    }else{
        cout<<"Pattern found at index: "<<index<<endl;
    }
    return 0;
}
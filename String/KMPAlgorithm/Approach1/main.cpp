#include<bits/stdc++.h>
using namespace std;

int KMP(string text,string patter){
    int m = patter.size();
    int n = text.size();
    for(int i=0;i<m-n;i++){
        int j = 0;
        for(int j=0;j<n;j++){
            if(patter[i+j]!= text[j]){
                break;
            }
        }
        if(j==n) return i;
    }
    return -1;
}

int main(){
    string text,patter;
    cout<<"Enter the text: ";
    cin>>text;
    cout<<"Enter the patter: ";
    cin>>patter;
    int index = KMP(text,patter);
    if(index==-1){
        cout<<"Patter not found in the text."<<endl;
    }else{
        cout<<"Patter found at index: "<<index<<endl;
    }
    return 0;
}
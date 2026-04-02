#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
      Node* arr[26];
      bool flag = false;
};

class Trie{
    Node* root;
    public: 
      Trie(){
        root = new Node();
      }
};

bool startWith(string prefix){
    Node* temp = root;
    for(char ch:prefix){
        if(!temp->arr[ch-'a']) return false;
        temp = temp->arr[ch-'a'];
    }
    return true;
}

int main(){
    Trie* obj = new Trie();
    string prefix;
    cin>>prefix;
    cout<<obj->startWith(prefix)<<endl;
}
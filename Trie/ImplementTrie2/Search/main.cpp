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

bool search(string word){
    Node* temp = root;
    for(char ch:word){
        if(!temp->arr[ch-'a']) return false; 
        temp = temp->arr[ch-'a'];
    }
    return node->flag;
}

int main(){
    Trie* trie = new Trie();
    trie->insert("hello");
    cout<<trie->search("hello")<<endl; // Output: 1 (true)
    cout<<trie->search("hell")<<endl;  // Output: 0 (false)
    cout<<trie->search("helloo")<<endl; // Output: 0 (false)
    return 0;
}
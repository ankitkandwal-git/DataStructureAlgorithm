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
    void insert(const string& word){
      Node* temp = root;
      for(char ch : word){
        if(!temp->arr[ch-'a']){
           temp->arr[ch-'a'] = new Node();
        }
        temp = temp->arr[ch-'a'];
      }
      temp->flag = true;
    }
};

int main(){
  Trie trie;
  int n;
  cout << "Enter number of words to insert: ";
  cin >> n;
  cin.ignore();
  for(int i = 0; i < n; ++i) {
    string word;
    cout << "Enter word " << (i+1) << ": ";
    getline(cin, word);
    trie.insert(word);
    cout << "Inserted: " << word << endl;
  }
  return 0;
}
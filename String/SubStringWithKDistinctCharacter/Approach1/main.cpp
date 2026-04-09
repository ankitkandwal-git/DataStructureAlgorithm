#include<bits/stdc++.h>
using namespace std;

long long subStringwithDistinctChar(string s,int k){
    long long ans=0;
    int n = s.size();
    for(int i=0;i<n;i++){
        int count=0;
        int arr[26] = {0};
        for(int j=i;j<n;j++){
            if(arr[s[j-'a']]==0){
                count++;
                if(count==k+1) break;
                if(count==k) ans++;
            }
        }
    }
    return ans;
}
int main(){
    string s;
    int k;
    cin>>s>>k;
    cout<<subStringwithDistinctChar(s,k)<<endl;
    return 0;
}
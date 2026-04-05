#include<bits/stdc++.h>
using namespace std;

int integerToRoman(int num){
    vector<pair<int,string>>v = {
        {1000,"M"},
        {500,"D"},
        {100,"C"},
        {50,"L"},
        {10,"X"},
        {5,"V"},
        {4,"IV"},
        {1,"I"}
    };
    string result = "";
    int n = num.size();
    
}
#include<bits/stdc++.h>
using namespace std;

int stringToInt(string str){
    int sign = 1;
    int n = str.size();
    long long ans = 0;
    int i = 0;
    for(int i=0;i<n;i++){
        if(str[i]==' '){
            continue;
        }
        else if(str[i]=='-'){
            sign = -1;
            i++;
            break;
        }
        else if(str[i]=='+'){
            i++;
            sign = 1;
            break;
        }
        else if(str[i]>='0' && str[i]<='9'){
            int digit = str[i]-'0';
            ans = ans*10 + digit;
            if(ans*sign > INT_MAX){
                return INT_MAX;
            }
            else if(ans*sign < INT_MIN){
                return INT_MIN;
            }
        }
    }
    return ans*sign;
}
int main(){
    string str;
    cout<<"Enter the string: ";
    cin>>str;
    int ans = stringToInt(str);
    cout<<"The integer value is: "<<ans<<endl;
    return 0;
}
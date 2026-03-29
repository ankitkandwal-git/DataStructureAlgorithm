#include<bits/stdc++.h>
using namespace std;

bool movieTicketCounter(vector<int>&arr,int n){
    int fifties = 0, hundreds = 0 , twoHundreds = 0;
    for(int i=0;i<n;i++){
        if(arr[i]==50){
            fifties++;
        }
        else if(arr[i]==100){
            hundreds++;
            if(fifties>0){
                fifties--;
            }
            else return false;
        }
        else if(arr[i]==200){
            twoHundreds++;
            if(hundreds>0 && fifties>0){
                hundreds--;
                fifties--;
            }
            else return false;
        }
    }
    return true;
}

int main(){
    int n;
    cout<<"Enter the number of people in queue: ";
    cin>>n;
    vector<int>arr(n);
    cout<<"Enter the denominations of the tickets: ";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    if(movieTicketCounter(arr,n)){
        cout<<"Yes, all people can buy the ticket."<<endl;
    }
    else{
        cout<<"No, all people cannot buy the ticket."<<endl;
    }
}
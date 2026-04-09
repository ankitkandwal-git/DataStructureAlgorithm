#include<bits/stdc++.h>
using namespace std;

int conferenceRoomBooking(vector<int>&start,vector<int>&end){
    vector<pair<int,int>>v;
    for(int i = 0; i < start.size(); i++) {
        v.push_back({end[i], start[i]});
    }
    sort(v.begin(),v.end());
    int count = 1;
    int end_time = v[0].first;
    for(int i =1;i<v.size();i++){
        if(v[i].second>=end_time){
            count++;
            end_time = v[i].first;
        }
    }
    return count;
}

int main(){
    int m;
    cout<<"Enter the number of meetings: ";
    cin>>m;
    vector<int>start(m),end(m);
    cout<<"Enter the start times of the meetings: ";
    for(int i = 0; i < m; i++) {
        cin>>start[i];
    }
    cout<<"Enter the end times of the meetings: ";
    for(int i = 0; i < m; i++) {
        cin>>end[i];
    }
    int result = conferenceRoomBooking(start, end);
    cout<<"Maximum number of meetings that can be accommodated: "<<result<<endl;
}
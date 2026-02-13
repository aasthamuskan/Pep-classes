#include<bits/stdc++.h>
using namespace std;
vector<int>honest_no(vector<int>&arr){
    unordered_map<int,int>mp;
    queue<int>q;
    vector<int>res;
    for(int x : arr){
        mp[x]++;
        q.push(x);
        while(!q.empty() && mp[q.front()]>1){
            q.pop();
        }
        if(q.empty()){
            res.push_back(-1);
        }else{
            res.push_back(q.front());
        }
        
    }
    return res;
}
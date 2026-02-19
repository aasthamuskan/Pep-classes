#include<bits/stdc++.h>
using namespace std;
vector<int>complementpair(vector<int>&arr,int t,int k){
    int n=arr.size();
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        if(i-k >= 0){
            int val = arr[i-k];
            if(mp.find(val) == mp.end()){
                mp[val]=i-k;
            }
        }
     
         int need = t - arr[i];
    if(mp.find(need) != mp.end()){
        return {mp[need],i};
    }
   
    }
    return {-1, -1};


}
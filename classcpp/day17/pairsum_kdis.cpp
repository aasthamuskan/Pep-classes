#include<bits/stdc++.h>
using namespace std;
pair<int,int>pairsum_k(vector<long long>&arr,int k,long long target){
    //this is brute force condition
    // int n=arr.size();
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         if(arr[i]+arr[j]== target && j>=k){
    //             return {i,j};
    //         }
    //     }
    // }
    // return {-1,-1};
    int n=arr.size();
    unordered_map<long long,vector<int>>indexmap;
    pair<int,int>best={-1,-1};
    for(int j=0;j<k;j++){
        long long need= target - arr[j];
        if(indexmap.count(need)){
            for(int i : indexmap[need]){
                if(j-i>= k){
                    pair<int,int>candidate={i,j};
                    if(best.first==-1 || candidate < best){
                        best = candidate;
                    }
                }
            }
        }
        indexmap[arr[j]].push_back(j);

    }
    return best;

}
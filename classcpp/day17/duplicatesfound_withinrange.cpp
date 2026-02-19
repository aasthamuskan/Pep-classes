#include<bits/stdc++.h>
using namespace std;
bool malfunctioning(vector<int>&arr,int k){
    // int n=arr.size();
    // for(int i=0;i<n;i++){
    //     for(int j=i;j<n;j++){
    //         if(arr[i]==arr[j] ||  j <= k){
    //             return true;
    //         }
    //     }
        
    // }
    // return false;


    int n= arr.size();
    unordered_set<int>window;
    for(int i=0;i<n;i++){
       if(window.count(arr[i])){
        return true;
       }
       window.insert(arr[i]);
       if(window.size()>k){
        window.erase(arr[i-k]);
       }
    }
    return false;
}
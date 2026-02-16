#include<bits/stdc++.h>
using namespace std;
vector<int>intersected_array(vector<int>&a,vector<int>&b){
    int n=a.size();
    int m=b.size();
    vector<int>ans;
    int i=0;
    int j=0;
    while(i<n && j<m){
        if(a[i]<b[j]){
            i++;
        }else if(a[i]>b[j]){
            j++;
        }else{
            ans.push_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}
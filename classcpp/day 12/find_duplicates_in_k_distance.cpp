#include <bits/stdc++.h>
using namespace std;

bool duplicatesFound(const vector<int>&ids, int k){
   unordered_set<int>window;
   for(int i=0;i<ids.size();i++){
    if(window.find(ids[i]) != window.end()){
        return true;
    }
    window.insert(ids[i]);

    if(i>=k){
        window.erase(ids[i-k]);
    }
   }
   return false;
}
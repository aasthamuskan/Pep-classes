#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int>arr ={2,4,5,6,7,2,4};
    unordered_set<int>seen;
    vector<int>result;
    for(int x : arr){
        if(seen.find(x) == seen.end()){
            seen.insert(x);
            result.push_back(x);
        }
    }
    int n= result.size();
  for(int i=0;i<n;i++){
    // cout << result;
  }
    
}
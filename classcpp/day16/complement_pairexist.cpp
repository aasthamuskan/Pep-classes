#include<bits/stdc++.h>
using namespace std;
vector<int>ans(vector<int>&arr,int target){
    int n=arr.size();
    unordered_map<int,int>mp;
    for(int i=0;i<n;i++){
        int need = target - arr[i];
        if(mp.find(need) != mp.end()){
            return {mp[need],i};
        }
        mp[arr[i]]=i;
    }
    return {-1,-1};
}
int main() {
    vector<int> arr = {2, 7, 11, 15};
    int target = 9;

    vector<int> result = ans(arr, target);

    if(result[0] == -1) {
        cout << "No solution found" << endl;
    } else {
        cout << "Indices: " << result[0] << " " << result[1] << endl;
    }

    return 0;
}

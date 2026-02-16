#include<bits/stdc++.h>
using namespace std;
bool duplicates(vector<int>arr){
    unordered_set<int>ans;
    int n=arr.size();

    for(int i=0;i<n;i++){
    if(ans.find(arr[i]) != ans.end())
            return true;
        
        ans.insert(arr[i]);
    }
    return false;
}
int main() {
    int n;
    cin >> n;

    vector<int> arr(n);
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    if(duplicates(arr))
        cout << "true";
    else
        cout << "false";

    return 0;
}
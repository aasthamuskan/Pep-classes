#include<bits/stdc++.h>
using namespace std;
int count(vector<int>arr,int k){
    int n=arr.size();
    int sum=0;
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){
            sum+=sum +arr[j];
            if(sum == k){
                count++;
            }
        }
        return count;
    }
}
#include<bits/stdc++.h>
using namespace std;
int valuepresent_index(int n,int arr[],int k){
  
    if(n ==0) return -1;
    // if(n== 1) return 0;
    for(int i=0;i<n;i++){
        if(arr[i] == k){
            return i;
        }
    }
    return -1;
};
int main(){
    int arr[] = {2,3,4,5,4,6,7};
     int n = sizeof(arr) / sizeof(arr[0]);
    int k = 4;
    int res=valuepresent_index(n,arr,k);
    cout<<res<<endl;
    return 0;

}
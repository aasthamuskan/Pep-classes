#include<bits/stdc++.h>
using namespace std;
int longest_subarray_found(vector<int>&ids){
    unordered_map<int,int>lastseen;
    int left=0;
    int maxlen =0;
    for(int right =0;right<ids.size();right++){
        int currid=ids[right];
        if(lastseen.find(currid) != lastseen.end() && lastseen[currid] >= left){
            left = lastseen[currid] +1;
        }
        lastseen[ids[right]]=right;
        maxlen=max(maxlen,right-left+1);

    }
    return maxlen;

}
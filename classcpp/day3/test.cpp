#include<bits/stdc++.h>
using namespace std;
int modify(int x){
    return x;
}
void runtest(int actual,int expected){
    int n=modify(actual);
    if(n==expected){
        cout<<"test passed: mpdify(" << actual <<")returnrened "<<n<<endl;
    }else{
        cout<<"test failed: mpdify(" << actual <<")returnrened "<<n<<",expected "<<expected<<endl;
    }
}

void predefinedtests(){
    runtest(5,5);
    runtest(0,0);
    runtest(-3,-3);
}
#include<bits/stdc++.h>
using namespace std;
int storeIntSigned(long long inputvalue);
void runtest(const string& testid,long long input,int expected){
    int actual = storeIntSigned(input);
    cout<<"["<<testid<<"]";
    cout<<"input"<<input<<"\n";
    cout<<"expected output"<<expected<<"\n";
    cout<<"actual : "<<actual<< "\n";
    if(actual == expected){
        cout<<"result : pass";
    }else{
        cout<<"result : fail";
    }
}

void runpredefinedtest(){
    cout<<"runnung predefine testcases";
    runtest("tc01",0,0);
    runtest("tc02",100,100);
    runtest("tco3",-100,-100);

runtest("tc08", 2147483647, 2147483647);
runtest("tc09", -2147483648, -2147483648);

}
void runcustomtestcases(){

}
int main() {
    runpredefinedtest();
    return 0;
}

int storeIntSigned(long long inputvalue) {
    return inputvalue;
}
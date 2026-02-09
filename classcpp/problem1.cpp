// given a integer input, store it in signed int variable and print the value.
// observe what happens when the input exceeds the valid range of int

#include<bits/stdc++.h>
using namespace std;

int storeInSignedInt(long long inputvalue){
    int n = static_cast<int>(inputvalue);
    return n;
}

void runPredefinedTest();
void runcustomtest();
int main(){
    int choice;
    cout<<"1: run predefined tests\n";
    cout<<"2. run custom tests\n";
    cout<<"enter the chpice";
    cin>>choice;
    if(choice == 1){
        runPredefinedTest();
    }else if(choice == 2){
        runcustomtest();
    }else{
        cout<< "invalid choice\n";
    }
    
    return 0;
}

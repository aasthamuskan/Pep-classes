#include<bits/stdc++.h>
using namespace std;
int  findfirstInvalidoperation(const vector<string>& operations){
    int activeversions =0;
    for(int i=0;i<(int)operations.size();i++){
        const string& op = operations[i];
        if(op.find("DEPLOY")==0){
            activeversions++;
        }
        else if(op == "ROLLBACK"){
            if(activeversions==0){
                return i+1;
            }
            activeversions--;
        }
    }
    return -1;
}

int main() {

    vector<string> operations = {
        "DEPLOY 10",
        "DEPLOY 20",
        "ROLLBACK",
        "ROLLBACK",
        "ROLLBACK" 
    };

    // Function call
    int result = findfirstInvalidoperation(operations);

    // Output result
    cout << result << endl;

    return 0;
}
#include<bits/stdc++.h>
using namespace std;
int modify(int &x){
    return  x+19*100;
}
int main(){
    int n;
    cin>>n;
    int res=modify(n);
    cout<<"the result  "<<res<<endl;

}
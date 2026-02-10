#include<bits/stdc++.h>
using namespace std;
class MINstack{
    stack<long long>st;
    long long currentmin;
    public: 
    
        void enter(long long x){
            if(st.empty()){
                st.push(x);
            currentmin=x;
            }else if(x >= currentmin){
                st.push(x);
            }else{
                long long encoded = 2*x-currentmin;
                st.push(encoded);
                currentmin=x;
            }
        }

};
int main(){

}
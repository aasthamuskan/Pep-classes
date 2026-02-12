#include<bits/stdc++.h>
using namespace std;
class onestackqueue{
    stack<int>st;
    public: 
        void join(int x){
            st.push(x);
        }

        int serve(){
            if(st.empty()){
                cout<<"queue empty";
                return -1;
            }
            if(st.size()==1){
                int oldest = st.top();
                st.pop();
                return oldest;
            }
            int topelement =st.top();
            st.pop();
            int oldest = serve();
            st.push(topelement);
            return oldest;
        }
        bool empty(){
            return st.empty();
        }
};


int main() {
    onestackqueue q;

    q.join(1);
    q.join(2);
    q.join(3);

    cout << "Served: " << q.serve() << endl; 

    q.join(4);

    cout << "Served: " << q.serve() << endl; 
    cout << "Served: " << q.serve() << endl; 
    cout << "Served: " << q.serve() << endl; 

    cout << "Is queue empty? ";
    if (q.empty())
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}

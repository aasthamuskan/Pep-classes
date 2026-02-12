#include<bits/stdc++.h>
using namespace std;
string checkExpression(string s) {
    stack<char>st;
    bool redundantFound = false;
    for(int i=0;i<s.length();i++){
        char ch = s[i];
        if(ch == '(' || ch == '{' || ch == '['){
            st.push(ch);
        }
        else if(ch >= 'a' && ch <= 'z'){
            st.push(ch);
        }
        else if(ch =='+'||ch=='-'||ch== '*'|| ch==   '/'){
            if(st.empty() || st.top() == '(' || st.top()=='+' || st.top()=='-' ||
                st.top() == '*' || st.top() == '/') {
                return "INVALID";
            }
            st.push(ch);
        }
 else if (ch == ')') {
            bool hasOperator = false;
            while (!st.empty() && st.top() != '(') {
                if (st.top() == '+' || st.top() == '-' ||
                    st.top() == '*' || st.top() == '/') {
                    hasOperator = true;
                }
                st.pop();
            }
             if (st.empty()) {
                return "UNBALANCED";
            }

              st.pop();

                if (!hasOperator) {
                redundantFound = true;
            }

               st.push('a');
        }

    }
            
    while (!st.empty()) {
        if (st.top() == '(') {
            return "UNBALANCED";
        }
        st.pop();
    }

    if (redundantFound)
        return "REDUNDANT";

    return "VALID";
}

int main() {
    vector<string> tests = {
        "a+(b*c)",      // VALID
        "(a)",          // REDUNDANT
        "((a+b))",      // REDUNDANT
        "a+*b",         // INVALID
        "(a+b",         // UNBALANCED
        "a+(b/)",       // INVALID
        "a+b"           // VALID
    };

    for (auto &expr : tests) {
        cout << expr << " -> " << checkExpression(expr) << endl;
    }

    return 0;
}

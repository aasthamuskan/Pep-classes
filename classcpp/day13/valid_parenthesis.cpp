#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isValid(string s) {
    stack<char> st; 
    for (char c : s) {
        // If it's an opening bracket, push it onto the stack
        if (c == '(' || c == '{' || c == '[') {
            st.push(c);
        } 
        else {
            // If it's a closing bracket but stack is empty, it's invalid
            if (st.empty()) return false;
            
            char top = st.top();
            // Check if the closing bracket matches the top of the stack
            if ((c == ')' && top == '(') || 
                (c == '}' && top == '{') || 
                (c == ']' && top == '[')) {
                st.pop();
            } else {
                return false; // Mismatched bracket
            }
        }
    }
    
    // If the stack is empty, all brackets were matched correctly
    return st.empty();
}
#include <bits/stdc++.h>
using namespace std;

void insertsort(stack<int>& st, int x) {
    if (st.empty() || st.top() >= x) {
        st.push(x);
        return;
    }

    int temp = st.top();
    st.pop();

    insertsort(st, x);

    st.push(temp);
}

void sortstack(stack<int>& st) {
    if (st.empty()) return;

    int x = st.top();
    st.pop();

    sortstack(st);

    insertsort(st, x);
}

void printstack(stack<int>& st) {
    while (!st.empty()) {
        cout << st.top() << " ";
        st.pop();
    }
    cout << endl;
}

int main() {
    stack<int> st;
    int n, x;

    cin >> n;
    for (int i = 0; i < n; i++) {
        cin >> x;
        st.push(x);
    }

    sortstack(st);
    printstack(st);

    return 0;
}

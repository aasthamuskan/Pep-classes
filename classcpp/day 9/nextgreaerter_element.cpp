#include <bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int n) {
        data = n;
        next = NULL;
    }
};
Node* nextGreaterLinkedList(Node* head) {

    if (!head) return nullptr;
    vector<Node*> nodes;
    for (Node* curr = head; curr != nullptr; curr = curr->next) {
        nodes.push_back(curr);
    }

    int n = nodes.size();
    vector<int> result(n, 0);
    stack<int> st;
    for (int i = 0; i < n; i++) {
        int currentValue = nodes[i]->data;

        while (!st.empty() && nodes[st.top()]->data < currentValue) {
            result[st.top()] = currentValue;
            st.pop();
        }
        st.push(i);
    }
    Node* dummy = new Node(0);
    Node* tail = dummy;

    for (int i = 0; i < n; i++) {
        tail->next = new Node(result[i]);
        tail = tail->next;
    }

    return dummy->next;
}
Node* buildList(const vector<int>& input) {
    if (input.empty()) return nullptr;

    Node* head = new Node(input[0]);
    Node* curr = head;

    for (int i = 1; i < input.size(); i++) {
        curr->next = new Node(input[i]);
        curr = curr->next;
    }
    return head;
}
vector<int> listToVector(Node* head) {
    vector<int> res;
    while (head) {
        res.push_back(head->data);
        head = head->next;
    }
    return res;
}
bool compareVectors(const vector<int>& a, const vector<int>& b) {
    return a == b;
}
void runTest(
    const vector<int>& input,
    const vector<int>& expected,
    const string& testName
) {
    Node* head = buildList(input);
    Node* resultHead = nextGreaterLinkedList(head);
    vector<int> output = listToVector(resultHead);

    cout << "Test: " << testName << " -> ";
    if (compareVectors(output, expected)) {
        cout << "PASS";
    } else {
        cout << "FAIL\nExpected: ";
        for (int x : expected) cout << x << " ";
        cout << "\nGot: ";
        for (int x : output) cout << x << " ";
    }
    cout << endl;
}
int main() {

    runTest(
        {2, 1, 5},
        {5, 5, 0},
        "Basic example"
    );

    runTest(
        {2, 7, 4, 3, 5},
        {7, 0, 5, 5, 0},
        "Mixed values"
    );

    runTest(
        {5, 4, 3, 2, 1},
        {0, 0, 0, 0, 0},
        "Strictly decreasing"
    );

    runTest(
        {},
        {},
        "Empty list"
    );

    return 0;
}

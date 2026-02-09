#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

Node* addTwoNumbersForward(Node* l1, Node* l2) {
    stack<int> s1, s2;

    // push digits into stacks
    while (l1) {
        s1.push(l1->data);
        l1 = l1->next;
    }
    while (l2) {
        s2.push(l2->data);
        l2 = l2->next;
    }

    int carry = 0;
    Node* head = NULL;

    // add till stacks or carry exists
    while (!s1.empty() || !s2.empty() || carry) {
        int sum = carry;

        if (!s1.empty()) {
            sum += s1.top();
            s1.pop();
        }
        if (!s2.empty()) {
            sum += s2.top();
            s2.pop();
        }

        carry = sum / 10;
        int digit = sum % 10;

        Node* newNode = new Node(digit);
        newNode->next = head;
        head = newNode;
    }

    return head;
}

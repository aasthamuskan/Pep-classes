#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;

};
Node* reverselist(Node* Right){
    Node* prev=NULL;
    Node* curr=Right;
    while(curr != NULL){
        Node* nextnode= curr ->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
    }
    return prev;
}
bool palimdrome(Node* head){
    Node* slow=head;
    Node* fast=head;
    while(fast != NULL && fast->next != NULL){
        fast=fast->next->next;
        slow=slow->next;
    }
    Node* middle=slow;
    Node* right = slow->next;
    right = reverselist(right);

    Node* left = head;

    while(right != NULL){
        if(left->data != right->data){
            return false;
        }
    }
    return true;
}
Node* buildList(vector<int> v) {
    if (v.empty()) return NULL;

    Node* head = new Node(v[0]);
    Node* curr = head;

    for (int i = 1; i < v.size(); i++) {
        curr->next = new Node(v[i]);
        curr = curr->next;
    }
    return head;
}

int main() {
    Node* head1 = buildList({1, 2, 3, 2, 1});
    Node* head2 = buildList({1, 2, 3, 4});

    cout << (palindrome(head1) ? "Palindrome\n" : "Not Palindrome\n");
    cout << (palindrome(head2) ? "Palindrome\n" : "Not Palindrome\n");

    return 0;
}
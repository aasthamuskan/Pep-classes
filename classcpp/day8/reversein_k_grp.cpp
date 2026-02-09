#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int n){
        data = n;
        next = NULL;
    }
};
Node* reverseKgrp(Node* head,int k){
    if(!head || k <= 1) return head;
    Node* curr =head;
    Node* prevGrouptail = nullptr;
    Node* newhead = nullptr;
    while(curr){
        Node* check = curr;
        int count =0;
        while(count < k && check){
            check = check -> next;
            count++;
        }
        if(count < k){
            if(prevGrouptail){
                prevGrouptail->next=curr;
            }
            break;
        }

        Node* prev = nullptr;
        Node* grphead=curr;
        count=0;
        while(count <k){
            Node* next=curr->next;
            curr->next=prev;
            prev = curr;

            curr = next;
            count++;

        }

        if(!newhead){
            newhead=prev;
        }
        if(prevGrouptail){
            prevGrouptail->next=prev;
        }
        prevGrouptail=grphead;

    }
    return newhead ? newhead : head;
}
int main() {
  
    int n;
    if (!(cin >> n)) return 0;
    Node* head = nullptr;
    Node* tail = nullptr;
    for (int i = 0; i < n; ++i) {
        int x; cin >> x;
        Node* node = new Node(x);
        if (!head) head = node;
        else tail->next = node;
        tail = node;
    }
    int k; cin >> k;

    Node* res = reverseKgrp(head, k);
    for (Node* cur = res; cur; cur = cur->next) {
        cout << cur->data;
        if (cur->next) cout << " ";
    }
    cout << "\n";

    return 0;
}
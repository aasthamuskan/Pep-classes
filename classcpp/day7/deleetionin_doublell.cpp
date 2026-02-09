#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* prev;
    Node* next;
    Node(int d): data(d),prev(nullptr),next(nullptr){}
};


pair<Node*, Node*> reversek(Node* head,int k){
    Node* prev = nullptr;
  Node* curr = head;
    while(k--){
        Node* next = curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
    }
    return {prev,head};
}

Node* reversekgrp(Node* head,int k){
    if(!head || k==1) return head;
        int len=0;
        Node* temp = head;
        while(temp){
            len++;
            temp=temp->next;
        }
        
    return head;
 }
Node* insertTail(Node* head, int val){
    Node* node = new Node(val);
    if(!head) return node;
    Node* t = head;
    while(t->next) t = t->next;
    t->next = node;
    node->prev = t;
    return head;
}

void printList(Node* head){
    for(Node* t = head; t; t = t->next){
        cout << t->data;
        if(t->next) cout << " ";
    }
    cout << "\n";
}

int main(){
   
    int n, k;
    if(!(cin >> n >> k)) return 0;
    Node* head = nullptr;
    for(int i = 0; i < n; ++i){
        int x; cin >> x;
        head = insertTail(head, x);
    }
    head = reversekgrp(head, k);
    printList(head);
    return 0;
}

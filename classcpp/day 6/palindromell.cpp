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
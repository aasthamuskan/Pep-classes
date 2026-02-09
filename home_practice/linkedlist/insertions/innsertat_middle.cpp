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

void printll(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<< temp->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}

Node* insertatmiddle(Node* head,int val){
    if(head == NULL){
        return new Node(val);
    }
    if(head->next==NULL){
        Node* newnode = new Node(val);
        // newnode->next=head->next;
        head->next=newnode;
        return head;
    }
    Node* slow=head;
    Node* fast=head;
    while(fast->next != NULL && fast->next->next != NULL){
        slow = slow->next;
        fast=fast->next->next;
    }
    Node* newnode = new Node(val);
    newnode->next=slow->next;
    slow->next=newnode;
    return head;

}


int main(){
    int n;
    cout<<"enter the no of nodes ";
    cin>>n;
    Node* head = NULL;
    Node* tail = NULL;
    cout<<"enter the values: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        Node* newnode = new Node(x);
        if(head == NULL){
            head= newnode;
            tail = newnode;

        } else{
            tail->next = newnode;
            tail  = newnode;
        }
    }
    cout<<"original ll";
    printll(head);
    int val;
    cin>>val;
    head=insertatmiddle(head,val);
    cout<<"after insertion at middle: ";
    printll(head);
    return 0;

}
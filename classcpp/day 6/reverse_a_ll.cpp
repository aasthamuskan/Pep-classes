#include<bits/stdc++.h>
using namespace  std;
struct Node{
    int data;
    Node* next;
    Node(int n){
        data = n;
    next=NULL;
    }


};
Node* reverselist(Node* head){
    Node* prev=NULL;
    Node* curr=head;
    while(curr != NULL){
        Node* nextnode= curr ->next;
        curr->next=prev;
        prev=curr;
        curr=nextnode;
    }
    return prev;
}
void printll(Node* head){
    Node* temp= head;
    while(temp != NULL){
        cout<<temp->data;
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    int n;
    cin>>n;
    Node* head=NULL;
    Node* tail=NULL;
    cout<<"enter the nides";
      for(int i=0;i<n;i++){
        int x;
        cin>>x;
        Node* newnode = new Node(x);
        if(head == NULL){
            head= newnode;
            tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    head = reverselist(head);
    printll(head);
}
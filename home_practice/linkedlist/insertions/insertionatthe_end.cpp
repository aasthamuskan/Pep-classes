#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
   Node(int n){
     data=n;
     next=NULL;
   }
};

void pritntll(Node* head){
  Node* temp = head;
  while(temp != NULL){
    cout<<temp->data<<" ";
    temp= temp->next;
    
  }
  cout<<endl;

}

Node* insertatend(Node* head,int val){
  Node* newnode = new Node(val);
  if(head == NULL){
    return newnode;
  }
  Node* temp = head;
  while(temp->next != NULL){
    temp=temp->next;
  }
  temp->next=newnode;
  return head;

}
int main(){
  int n;
  cout<<"enter the number of nodes: ";
  cin>>n;
  Node* head =NULL;
  Node* tail = NULL;
  cout<<"enter values: ";
  for(int i=0;i<n;i++){
    int x;
    cin>>x;
    Node* newnode= new Node(x);
    if(head == NULL){
      head = newnode;
      tail = newnode;
    }
  }
  cout<<"original linked list: ";
  pritntll(head);
  int val ;
  cout<<"enter value to insert at end: ";
  cin>>val;
  head=insertatend(head,val);
  cout<<"after insertion at the end";
pritntll(head);
  return 0;
}
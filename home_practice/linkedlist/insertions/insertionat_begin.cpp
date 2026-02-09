#include<bits/stdc++.h>
using namespace std;
struct Node
{
   int data;
   Node* next;
    Node(int n){
    data=n;
    next=NULL;
   }
};
Node* insert_atbegin(Node* head,int val){
    Node* newnode=new Node(val);
    newnode->next=head;
    return newnode;
}
void printll(Node* head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}

int main(){
    int n;
    cout<<"enter the no of nodes: ";
    cin>>n;
    Node* head = NULL;
    Node* tail = NULL;
    cout<<"enter the values: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        Node* newnode = new Node(x);
        if(head==NULL){
            head=newnode;
            tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    cout<<"original ll : ";
    printll(head);

    int val;
    cout<<"enter the value you want to insert at begning: ";
    cin>>val;
    head=insert_atbegin(head,val);
    cout<<"after insertion the valuse is: ";
    printll(head);
    return 0;

}
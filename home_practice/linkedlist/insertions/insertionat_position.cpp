#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data ;
    Node* next;
    Node(int n){
        data = n;
        next = NULL;
    }
};

void printll(Node* head){
    Node* temp = head;
    while( temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;

}

Node* insertatposition(Node* head , int pos,int val){
    if(pos<= 0){
        cout<<"invalid position\n";
        return head;
    }

    Node* temp =head;
    int cnt =1;

    while(temp != NULL && cnt <pos-1){
        temp=temp->next;
        cnt++;
    }
    if(temp == NULL){
        cout<<"position is out of range\n";
        return head;
    }
    Node* newnode = new Node(val);
    newnode->next = temp->next;
    temp->next=newnode;

    return head;
}

int main(){
    int n;
    cin>>n;
    Node* head = NULL;
    Node* tail = NULL;
    cout<<"enter the elemnets: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        Node* newnode = new Node(x);
        if(head == NULL){
            head= newnode;
            tail = newnode;

        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }

    int pos,val;
    cout<<"enter the pos";
    cin>>pos;
    cout<<"enter the val";
    cin>>val;
  



}
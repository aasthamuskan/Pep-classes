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
Node* printll(Node* head){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;

    }
    cout<<endl;
}

Node* insertaftervalue(Node* head,int k,int val){
    if(head == NULL){
        cout<<"list is empty\n";
        return head;
    }

    Node* curr = head;
    //searching
    while(curr != NULL && curr->data != k){
        curr = curr->next;
    }
    //k is not found
    if(curr == NULL){
        cout<<"value"<<k<<"not found\n";
        return head;
    }
//adding the value
    Node* newnode = new Node(val);
    newnode->next = curr->next;
    curr->next=newnode;

    return head;

}   

int main(){
    int a;
    cout<<"enter the length of ll";
    cin>>a;
    Node* head = NULL;
    Node* tail = NULL;
    cout<<"enter the elements";
    for(int i=0;i<a;i++){
        int x;
        cin>>x;
        Node* newnode = new Node(x);
        if(head==NULL){
            head = newnode;
            tail=newnode;
        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }

    cout<<"original linked list";
    printll(head);

    int k,val;
    cout<<"enter the position";
    cin>>k;
    cout<<"enter the value: ";
    cin>>val;
    head = insertaftervalue(head,k,val);
    cout<<"after insertion after "<<k<<": ";
    printll(head);
    return 0;
}



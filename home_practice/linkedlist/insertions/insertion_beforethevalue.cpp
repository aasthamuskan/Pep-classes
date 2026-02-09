#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data = x;
        next=NULL;
    }
};

void printll(Node* head){
    Node* temp =head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
};

Node* insertbeforevalue(Node* head,int k,int val){
    if(head == NULL){
        cout<<"list is emoty\n";
        return head;
    }

    if(head->data==k){
        Node* newnode = new Node(val);
        newnode->next=head;
        return newnode;
    }

    Node* prev=NULL;
    Node* curr=head;
    while(curr != NULL && curr->data != k){
        prev=curr;
        curr=curr->next;
    }
    if(curr==NULL){
        cout<<"value "<<k<<"not found\n";
        return head;
    }
    Node* newnode = new Node(val);
    prev->next = newnode;
    newnode->next=curr;
    return head;
}
int main(){
    int n;
    cout<<"enter the size of ll";
    cin>>n;
    Node* head=NULL;
    Node* tail=NULL;
    cout<<"eter the elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        Node* newnode=new Node(x);
        if(head==NULL){
            head=newnode;
            tail=newnode;

        }else{
            tail->next=newnode;
            tail=newnode;
        }
    }
    cout<<"original linked list: ";
    printll(head);
    int k;
    cout<<"enter the position at which you want to enter";
    cin>>k;
    int val;
     cout<<"eter the element: ";
    cin>>val;
    head = insertbeforevalue(head,k,val);
    cout<<"after insertion before "<<k<<": ";
    printll(head);
    return 0 ;

}
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int x){
        data=x;
        next=NULL;
    }

};
void printll(Node*  head){
    Node* temp=head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
Node* insertaftervalue(Node* head , int k,int val){
    if(head== NULL){
        cout<<"List is empty\n";
        return head;
        
    }
   Node* temp = head;
   int cnt=1;
   while(temp != NULL && cnt < k){
    temp= temp->next;
    cnt++;
   }

   if(temp == NULL){
    cout<<"post";
   }

}
int main(){
    int n;
    cin>>n;
    Node* head=NULL;
    Node* tail=NULL;
    cout<<"enter the elemnets: ";
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
    int k,val;
    cout<<"enter the value afteer which you wnat to add: ";
    cin>>k;
    cout<<"enter the value: ";
    cin>>val;
    head=insertaftervalue(head,k,val);
    cout<<"after insertion of"<<k<<": ";
    printll(head);
    return 0;

}

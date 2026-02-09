#include<bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int n) {
        data = n;
        next = NULL;
    }; // Added semicolon here
};

Node* removenthfromend(Node* head, int k) {
    Node* slowp = head;
    Node* fastp = head;
    for (int i = 0; i < k; i++) {
        if (fastp == NULL) return head; // Check for k greater than the length of the list
        fastp = fastp->next;
    }
    if (fastp == NULL) {
        return head->next;
    }

    while (fastp->next != NULL) {
        fastp = fastp->next;
        slowp = slowp->next;
    }
    Node* delnode = slowp->next;
    slowp->next = slowp->next->next; // Corrected from slow to slowp
    delete delnode;
    return head;
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
    int k;

    cin>>k;
     head = removenthfromend(head, k); // ✅ VERY IMPORTANT
    printll(head);  
    

}
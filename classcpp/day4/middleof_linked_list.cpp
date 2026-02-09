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
Node* middleoflinkedlist(Node* head){
    if(head == nullptr) return nullptr;
    Node* slow= head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){//THIS IS for odd and even no of nodes in ll

        slow=slow->next;
        fast=fast->next->next;
    }
    return slow;
}


// int main(){
//     int x;
//     cout<<"enter the length of ll";
//     cin>>x;

    
// }
//create ll;  ->create A node
    //        ->insertion of nodes in ll
                // head=null
                // insertatend(head,value)
                // printlist(head);
    

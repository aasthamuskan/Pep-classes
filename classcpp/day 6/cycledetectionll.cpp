#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node(int n){
        data= n;
        next=NULL;
    }
};
int cycledetection(Node* head){
    if(!head || !head->next) return 0;
    Node* slow = head;
    Node* fast = head;
    while(fast != NULL && fast->next != NULL){
        slow = slow->next;
        fast= fast->next->next;


        if(slow == fast){
            int length=1;
            Node* temp= slow->next;
            while(temp != slow){
                length++;
                temp=temp->next;
            }
            return length;
        }
    }
    return 0;

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
    int cycleLength = cycledetection(head);
    cout << "Cycle length: " << cycleLength << endl;
}


#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    Node* next;
    Node(int d) {
        data = d;
        next = NULL;
    }
};
void printll(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

Node* deleteKthNode(Node* head , int k){
    if(head == NULL){
        cout<<"list is empty\n";
        return head;
    }
    if(k==1){
        Node* temp = head;
        head = head->next;
        delete temp;
        return head;
    }

    Node* curr = head;
    Node* prev =NULL;
    int count=1;
    while(curr != NULL && count <k){
        prev=curr;
        curr=curr->next;
        count++;
    }

    if(curr == NULL){
        cout<<"Position out of range\n";
        return head;
    }
    prev->next = curr->next;
    delete curr;
    return head;

}
int main() {
    int n;
    cout << "enter the number of nodes: ";
    cin >> n;

    Node* head = NULL;
    Node* tail = NULL;

    cout << "enter values: ";
    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;

        Node* newnode = new Node(x);
        if (head == NULL) {
            head = newnode;
            tail = newnode;
        } else {
            tail->next = newnode;
            tail = newnode;
        }
    }

    cout << "original linked list: ";
    printll(head);

    int k;
    cout << "enter position to delete: ";
    cin >> k;

    head = deleteKthNode(head, k);

    cout << "after deletion: ";
    printll(head);

    return 0;
}
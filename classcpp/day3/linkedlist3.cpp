#include<bits/stdc++.h>
using namespace std;
struct Node {
    int data;
    int sumTillHere;
    Node* next;
    
    Node(int val) {
        data = val;
        sumTillHere = 0;
        next = NULL;
    }
};
class LinkedList {
public:
    Node* head;
    
    LinkedList() {
        head = NULL;
    }
    
    void insert(int val) {
        Node* newNode = new Node(val);
        
        if (head == NULL) {
            newNode->sumTillHere = val;
            head = newNode;
        } else {
            Node* temp = head;
            while (temp->next != NULL) {
                temp = temp->next;
            }
            newNode->sumTillHere = temp->sumTillHere + val;
            temp->next = newNode;
        }
    }
    
    int getSumTillN(int n) {
        Node* temp = head;
        int pos = 1;
        
        while (temp != NULL && pos < n) {
            temp = temp->next;
            pos++;
        }
        
        if (temp == NULL) {
            cout << "Invalid position" << endl;
            return -1;
        }
        
        return temp->sumTillHere;
    }
};


int main() {
    LinkedList ll;
    ll.insert(1);
    ll.insert(2);
    ll.insert(3);
    ll.insert(4);
    ll.insert(5);
    
    cout << "Sum till 3rd node: " << ll.getSumTillN(3) << endl;
    cout << "Sum till 5th node: " << ll.getSumTillN(5) << endl;
    
    return 0;
}
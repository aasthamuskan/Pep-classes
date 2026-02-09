#include<bits/stdc++.h>
using namespace std;
#include "middleof_linked_list.cpp";
Node* creatlist(const vector<int>vals){
    if(vals.empty()) return nullptr;

    Node* head = new Node(vals[0]);
    Node* curr=head;

 for (int i = 1; i < vals.size(); i++) {
        curr->next = new Node(vals[i]);
        curr = curr->next;
    }
 
    return head;
}
void runtest(const vector<int>&vals,int expected){
    
}


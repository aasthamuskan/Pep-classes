// you are given details of a banking transaction along with the current account balance .based on the type of transaction amount the program must determins\e whether the transaction is valid and compute the resulting account balance
#include<bits/stdc++.h>
using namespace std;
int main(){
    int balance, amount, choice;
    cout << "Enter current balance: ";
    cin >> balance;
    
    cout << "1. Deposit\n2. Withdrawal\n3. Check Balance\nChoose transaction type: ";
    cin >> choice;
    
    if (choice == 1) {
        cout << "Enter amount to deposit: ";
        cin >> amount;
        if (amount > 0) {
            balance += amount;
            cout << "Deposit successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid amount!" << endl;
        }
    } 
    else if (choice == 2) {
        cout << "Enter amount to withdraw: ";
        cin >> amount;
        if (amount > 0 && amount <= balance) {
            balance -= amount;
            cout << "Withdrawal successful. New balance: " << balance << endl;
        } else {
            cout << "Invalid transaction!" << endl;
        }
    } 
    else if (choice == 3) {
        cout << "Current balance: " << balance << endl;
    } 
    else {
        cout << "Invalid choice!" << endl;
    }
    
    return 0;
}
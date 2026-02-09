#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[],int n){
    int i=0,j=n-1;
    for(int i=0;i<n;i++){
        swap(arr[i],arr[j]);
        i++;
        j--;
    }
}

void rotate(int arr[],int n){
    int last=arr[n-1];
    for(int i=n-1;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=last;
}

string takeinput(){
    string s;
    getline(cin,s);
    return s;
}
void reversestring(string &a){
    int i=0;
    int j=a.length()-1;

    while(i<j){
        swap(a[i],a[j]);
        i++;
        j--;
    }
}
int main(){
    int arr[4]={4,5,6,7};
    for(int i=0;i<5;i++){
        cout<< arr[i]<<" ";
    }



    string  s = "abcd" ; 
    reversestring(s);
    cout << "enter the string: ";
    string a=takeinput();
    cout<<a;
}
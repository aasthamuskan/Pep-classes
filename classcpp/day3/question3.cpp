#include <iostream>
using namespace std;
void demo_const_pointer(int* const p){
    *p = 25;  // Can modify value
    cout << "In demo_const_pointer: *p = " << *p << endl;
}
void demo_pointer_const(const int* p){
    cout << "In demo_pointer_const: *p = " << *p << endl;
}
void demo_const_pointer_const(const int* const p){
    cout << "In demo_const_pointer_const: *p = " << *p << endl;
}
int main() {
    // Declare integer variables
    int x = 10;
    int y = 20;
    
    // 1. Pointer to const int (cannot modify value, can modify pointer)
    const int* ptr1 = &x;
    // *ptr1 = 15;  // Error: cannot modify
    ptr1 = &y;     // OK: can change pointer
    demo_pointer_const(ptr1);
    // 2. Const pointer to int (can modify value, cannot modify pointer)
    int* const ptr2 = &x;
    *ptr2 = 15;    // OK: can modify value
    // ptr2 = &y;  // Error: cannot change pointer
       demo_const_pointer(ptr2);
    // 3. Const pointer to const int (cannot modify either)
    const int* const ptr3 = &x;
        demo_const_pointer_const(ptr3);
    // *ptr3 = 15;  // Error: cannot modify value
    // ptr3 = &y;   // Error: cannot change pointer
    
    cout << "x = " << x << ", y = " << y << endl;
    cout << "*ptr1 = " << *ptr1 << endl;
    cout << "*ptr2 = " << *ptr2 << endl;
    cout << "*ptr3 = " << *ptr3 << endl;

    
    return 0;
}
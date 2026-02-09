#include<bits/stdc++.h>
using namespace std;
int main(){

    const int rows = 3;
    int** jaggedArray = new int*[rows];
    int cols[] = {3, 4, 5};
    
    // Initialize the jagged array
    for(int i = 0; i < rows; i++){
        jaggedArray[i] = new int[cols[i]];
        for(int j = 0; j < cols[i]; j++){
            jaggedArray[i][j] = (i+1)*10 + j;
        }
    }
    
    // Display the jagged array
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols[i]; j++){
            cout << jaggedArray[i][j] << " ";
        }
        cout << "\n";
    }
    
    // Free allocated memory
    for(int i = 0; i < rows; i++){
        delete[] jaggedArray[i];
    }
    delete[] jaggedArray;
    
    return 0;
}
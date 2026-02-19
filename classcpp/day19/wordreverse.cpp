#include <bits/stdc++.h>
using namespace std;

// Reversing each word of the string
void reverseWords(string &str) {
    stringstream ss(str);
    string word, result = "";
    while (ss >> word) {
        reverse(word.begin(), word.end());
        result += word + " ";
    }
    str = result.substr(0, result.size() - 1); // Remove the trailing space
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);

    reverseWords(input);

    cout << "Reversed words: " << input << endl;

    return 0;
}


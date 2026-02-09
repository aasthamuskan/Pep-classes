#include <bits/stdc++.h>
using namespace std;

#include "valid_palindrome.cpp"

void runtest(const string& input, bool expected) {
    bool result = valid_palindrome(input);

    cout << "Input: \"" << input << "\"\n";
    cout << "Expected: " << (expected ? "true" : "false")
         << ", Got: " << (result ? "true" : "false") << "\n\n";
}

int main() {
    runtest("a man ,a plan , a canal: panama", true);
    runtest("race a car", false);
    runtest("", true);
    runtest("  ", true);

    // IMPORTANT: This should be TRUE by standard definition
    runtest("!!!@@###", true);

    runtest("a", true);
    runtest("NoOn", true);
    runtest("1a2b2a1", true);
    runtest("abc@c#dlba", false);
    runtest("was it a rat I saw?", true);

    return 0;
}

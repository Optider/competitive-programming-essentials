// Problem: https://practice.geeksforgeeks.org/problems/non-repeating-character-1587115620/0/

// C++ program to implement
// the above approach

#include <bits/stdc++.h>
using namespace std;

// Function to traverse the string and
// print the characters of the string
void TraverseString(string &str, int N) {
    // Traverse the string
    for (int i = 0; i < N; i++) {
        // Print current character
        cout << str[i] << " ";
    }
}

// Driver Code
int main() {
    string str = "GeeksforGeeks";

    // Stores length of the string
    int N = str.length();

    TraverseString(str, N);
}
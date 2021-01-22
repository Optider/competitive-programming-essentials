/*  
    Problem: Given a string s, we need to find the length of the string.

    Test Cases:

        i/p: Geeks
        o/p: 5

        i/p: Hello1234
        o/p: 9

*/

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int lengthString(string str);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << lengthString(s) << endl;
    }

    return 0;
}

// } Driver Code Ends

//User function Template for C++

// T: Theta(1)
// S: Theta(1)
int lengthString(string str) {
    //Your code here
    return str.length();
}
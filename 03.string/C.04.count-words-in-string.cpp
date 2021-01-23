/*  
    Problem: Given a ..., we need to print ...

    Test Cases:

        i/p: words
        o/p: 1

        // NOTE: space at end (after 'Hello')
        i/p: worlds is Hello 
        o/p: 3

*/

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;
int countWords(string str);
int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        cout << countWords(s) << endl;
    }
    return 0;
}

// } Driver Code Ends

//User function Template for C++

int countWords(string str) {
    //Your code here
    int words_count = 1;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ' and i != (str.length() - 1))
            words_count++;
    }
    return words_count;
}

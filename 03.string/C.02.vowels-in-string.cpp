/*  
    Problem: Given a ..., we need to print ...

    Test Cases:

        i/p: geeks
        o/p: 2

        i/p: world
        o/p: 1

*/

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int countVowels(string str);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        cout << countVowels(s) << endl;
    }
    return 0;
}

// } Driver Code Ends

//User function Template for C++

// T: Theta(N)
// S: Theta(1)
int countVowels(string str) {
    //Your code here
    int vowels_count = 0;

    for (char ch : str) {
        if (ch == 'a' or ch == 'e' or ch == 'i' or ch == 'o' or ch == 'u')
            vowels_count++;
    }
    return vowels_count;
}

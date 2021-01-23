/*  
    Problem: You are given a string s. You need to count the total distinct vowels in the string. The string s contains lowercase letters only.

    Test Cases:

        i/p: geeks
        o/p: 1

        i/p: worldoaa
        o/p: 2

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
// S: O(const)
int countVowels(string str) {
    //Your code here
    unordered_set<char> vowels_present;

    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a' or str[i] == 'e' or str[i] == 'i' or str[i] == 'o' or str[i] == 'u')
            vowels_present.insert(str[i]);
    }
    return vowels_present.size();
}
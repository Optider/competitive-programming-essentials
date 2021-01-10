/*  
    Problem: Given 2 strings, we need to check if they are rotations of each other

    Test Cases:

        i/p: s1="ABCD", s2="CDAB"
        o/p: Yes

        i/p: s1="ABAAA", s2="BAAAA"
        o/p: Yes

        i/p: s1="ABAB", s2="ABBA"
        o/p: No

*/

#include <bits/stdc++.h>
using namespace std;

// T: Theta(n)
// S: Theta(n)
void check_rotated_better(const string &s1, const string &s2) {
    if (s1.length() != s2.length()) {
        cout << "No" << endl;
        return;
    }

    string s1_twice = s1 + s1;

    if (s1_twice.find(s2) == string::npos)  // STL find() takes O(n)
        cout << "No" << endl;
    else
        cout << "Yes" << endl;
}

// T: O((n-m+1)*m) quadratic
// S: Theta(n)
void check_rotated(const string &s1, const string &s2) {
    if (s1.length() != s2.length()) {
        cout << "No" << endl;
        return;
    }

    string s1_twice = s1 + s1;

    // check if s1_twice contains s2

    int m = s2.length();
    int n = s1_twice.length();

    for (int i = 0; i <= (n - m); i++) {
        int j = 0;
        for (j = 0; j < m; j++) {
            if (s2[j] != s1_twice[i + j])
                break;
        }
        if (j == m) {
            cout << "Yes" << endl;
            return;
        }
    }
    cout << "No" << endl;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    check_rotated(s1, s2);
    check_rotated_better(s1, s2);
    cout << endl;
    return 0;
}
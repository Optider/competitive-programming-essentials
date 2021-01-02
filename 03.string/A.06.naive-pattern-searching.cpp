/*  
    Problem: Given a pattern and a text, we need to print all occurrences of the pattern in the text.

    Test Cases:

    i/p: txt="ABABABCD", pat="ABAB"
    o/p: 0 2

    i/p: txt="ABCABCD", pat="ABCD"
    o/p: 3

    i/p: txt="AAAAA", pat="AAA"
    o/p: 0 1 2

*/

#include <bits/stdc++.h>
using namespace std;

// T: O((n-m+1)*m)
// S: Theta(1) constant
void patSearching(const string &txt, const string &pat) {
    int n = txt.length();
    int m = pat.length();

    for (int i{}; i <= (n - m); i++) {
        int j = 0;
        for (; j < m; j++) {
            if (pat[j] != txt[i + j])
                break;
        }

        if (j == m) {
            cout << i << " ";
        }
    }
}

int main() {
    string txt{}, pat{};
    cin >> txt >> pat;

    cout << "All index numbers where pattern found: ";
    patSearching(txt, pat);

    cout << endl;
    return 0;
}
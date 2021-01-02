/*  
    Problem: Given a pattern with distinct characters and a text, we need to print all occurrences of the pattern in the text.

    Test Cases:

    i/p: txt="ABCABCDABCD", pat="ABCD"
    o/p: 3 7

    i/p: txt="ABCABCD", pat="ABCD"
    o/p: 3

    i/p: txt="ABCAAAD", pat="ABD"
    o/p: 

*/

#include <bits/stdc++.h>
using namespace std;

// T: Theta(N)
// S: Theta(1) constant
void improvedPatSearching(const string &txt, const string &pat) {
    int n = txt.length();
    int m = pat.length();

    for (int i{}; i <= (n - m);) {
        int j{};
        for (; j < m; j++) {
            if (pat[j] != txt[i + j])
                break;
        }

        if (j == m)
            cout << i << " ";

        if (j == 0)
            i++;
        else
            i += j;
    }
}

int main() {
    string txt{}, pat{};
    cin >> txt >> pat;

    cout << "All index numbers where pattern found: ";
    improvedPatSearching(txt, pat);

    cout << endl;
    return 0;
}
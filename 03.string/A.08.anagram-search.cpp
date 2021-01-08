/*  
    Problem: Given a text and a pattern, the task is to find if there is anagram of pattern present in text.

    Test Cases:

        i/p: txt="geeksforgeeks", pat="frog"
        o/p: Yes

        i/p: txt="geeksforgeeks", pat="rseek"
        o/p: No

*/

#include <bits/stdc++.h>
using namespace std;

#define alpha_len 256

// T: O(m+alpha_len)
// S: Theta(1) constant, alpha_len
bool is_anagram(const string &txt, const string &pat, int start) {
    int m = pat.length();

    int count[alpha_len]{};

    for (int j = 0; j < m; j++) {
        count[txt[start + j]]++;
        count[pat[j]]--;
    }

    for (int f : count) {
        if (f != 0)
            return false;
    }
    return true;
}

// T: O((n-m+1)*m)
// S: Theta(1) => alpha_len, due to is_anagram(), constant
void anagram_search(string txt, string pat) {
    int n = txt.length();
    int m = pat.length();

    bool has_anagram = false;
    for (int i = 0; i <= (n - m); i++) {
        if (is_anagram(txt, pat, i)) {
            has_anagram = true;
            break;
        }
    }

    if (has_anagram)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
}

int main() {
    string txt, pat;
    cin >> txt >> pat;

    anagram_search(txt, pat);
    cout << endl;
    return 0;
}
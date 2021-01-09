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

// T: O(n)
// S: Theta(1) constant, alpha_len
void anagram_search_better(const string &txt, const string &pat);
bool is_count_empty(const int *count);
bool is_anagram(const string &txt, const string &pat, int start);
// T: O((n-m+1)*m)
// S: Theta(1) => alpha_len, due to is_anagram(), constant
void anagram_search(const string &txt, const string &pat);

// T: O(1) alpha_len, constant
// S: Theta(1) constant
bool is_count_empty(const int *count) {
    for (int i = 0; i < alpha_len; i++)
        if (count[i] != 0)
            return false;
    return true;
}

// T: O(n)
// S: Theta(1) constant, alpha_len
void anagram_search_better(const string &txt, const string &pat) {
    int n = txt.length();
    int m = pat.length();

    int count[alpha_len]{};

    for (int i = 0; i < m; i++) {
        count[pat[i]]--;
        count[txt[i]]++;
    }

    // check if count[] is 0
    if (is_count_empty(count)) {
        cout << "Yes" << endl;
        return;
    }

    for (int i = m; i < n; i++) {
        // exclude txt[i-m] in count
        count[txt[i - m]]--;
        // include txt[i] in count
        count[txt[i]]++;

        // check if count[] is 0
        if (is_count_empty(count)) {
            cout << "Yes" << endl;
            return;
        }
    }

    cout << "No" << endl;
}

// T: O(m) <=> O(m+alpha_len)
// S: Theta(1) constant, alpha_len
bool is_anagram(const string &txt, const string &pat, int start) {
    int m = pat.length();

    int count[alpha_len]{};

    for (int j = 0; j < m; j++) {
        count[txt[start + j]]++;
        count[pat[j]]--;
    }

    return is_count_empty(count);
}

// T: O((n-m+1)*m)
// S: Theta(1) => alpha_len, due to is_anagram(), constant
void anagram_search(const string &txt, const string &pat) {
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

    anagram_search_better(txt, pat);
    anagram_search(txt, pat);

    cout << endl;
    return 0;
}
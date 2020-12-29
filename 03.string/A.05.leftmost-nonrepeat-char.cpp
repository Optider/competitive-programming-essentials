/*  Test Cases:

    i/p: geeksforgeeks
    o/p: 5

    i/p: abbcc
    o/p: 0

    i/p: abcd
    o/p: 0

    i/p: abcabc
    o/p: -1
    
 */

#include <bits/stdc++.h>
using namespace std;

const int LEN{256};

// T: Theta(N) 2 loops for string
// S: Theta(LEN)
int first_nonrep_better_1(const string &word) {
    int freq[LEN]{0};

    for (char c : word)
        freq[c]++;

    for (int i{}; i < word.length(); i++) {
        if (freq[word[i]] == 1)
            return i;
    }
    return -1;
}

// T: Theta(N^2)
// S: Theta(1)
int first_nonrep(const string &word) {
    bool is_nonrep;

    for (int i{}; i < word.length(); i++) {
        is_nonrep = true;

        for (int j{}; j < word.length(); j++) {
            if (i != j and word[i] == word[j]) {
                is_nonrep = false;
                break;
            }
        }

        if (is_nonrep)
            return i;
    }
    return -1;
}

int main() {
    string word;
    cin >> word;

    // cout << first_nonrep(word) << endl;
    cout << first_nonrep_better_1(word) << endl;

    return 0;
}
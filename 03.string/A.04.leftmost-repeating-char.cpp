// i/p: geeksforgeeks
// o/p: 0

// i/p: abbcc
// o/p: 1

// i/p: abcd
// o/p: -1

#include <bits/stdc++.h>
using namespace std;

const int LEN{256};  // ascii char are 256
// if only lowercase are there. Use 26 instead!

// T: Theta(N) 2 loops
// S: Theta(LEN) constant space
int leftmost_rep(string word) {
    int freq[LEN]{0};
    for (char c : word) {
        freq[c]++;
    }

    int idx{};
    for (int i{}; i < word.length(); i++) {
        idx = word[i];
        if (freq[idx] > 1) {
            return i;
        }
    }
    return -1;
}

int main() {
    string word{};
    cin >> word;
    cout << leftmost_rep(word);
    cout << endl;
    return 0;
}
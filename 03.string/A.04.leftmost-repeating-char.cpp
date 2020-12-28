/*  Test Cases:
    i/p: geeksforgeeks
    o/p: 0

    i/p: abbcc
    o/p: 1

    i/p: abcd
    o/p: -1 
*/

#include <bits/stdc++.h>
using namespace std;

const int LEN{256};  // ascii char are 256
// if only lowercase are there. Use 26 instead!

// T: Theta(N+LEN) 1 loop
// S: Theta(LEN) constant space
// space is saved as bool[] is used as compared to int[] in better_1
int leftmost_rep_better_2(const string &word) {
    bool visited[LEN];
    fill(visited, visited + LEN, false);

    int leftmost_char_idx{INT_MAX};

    // traverse word from RHS
    for (int i = word.length() - 1; i >= 0; i--) {
        char letter{word[i]};
        // if letter is not visited, mark visited
        if (visited[letter] == false)
            visited[letter] = true;
        // else leftmost_char_idx=current_idx, as it appeared again
        else
            leftmost_char_idx = i;
    }

    if (leftmost_char_idx == INT_MAX)
        return -1;
    return leftmost_char_idx;
}

// T: Theta(N+LEN) 1 loop
// S: Theta(LEN) constant space
int leftmost_rep_better_1(const string &word) {
    int first_idx[LEN]{};  // -1 => unvisited, any-num-else => 1st index of visited char

    fill(first_idx, first_idx + LEN, -1);

    int leftmost_char_idx{INT_MAX};

    for (int i{}; i < word.length(); i++) {
        char letter = word[i];
        if (first_idx[letter] == -1) {
            first_idx[letter] = i;
        } else {
            // repeating char
            leftmost_char_idx = min(leftmost_char_idx, first_idx[letter]);
        }
    }
    if (leftmost_char_idx == INT_MAX) {
        return -1;
    }
    return leftmost_char_idx;
}

// T: Theta(N+LEN) 2 loops
// S: Theta(LEN) constant space
int leftmost_rep(const string &word) {
    int freq[LEN]{};
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
    cout << leftmost_rep_better_2(word) << endl;
    cout << leftmost_rep_better_1(word) << endl;
    cout << leftmost_rep(word) << endl;
    cout << endl;
    return 0;
}
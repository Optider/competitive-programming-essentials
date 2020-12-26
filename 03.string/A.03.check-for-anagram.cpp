#include <bits/stdc++.h>
using namespace std;

// T: Theta(N + CHAR)
// S: O(CHAR)
bool is_anagram_better(string word1, string word2) {
}

// T: Theta(N)
// S: O(N)
bool is_anagram(string word1, string word2) {
    unordered_map<char, int> freq_1;

    if (word1.length() != word2.length()) {
        return false;
    }

    // create freq from word1
    for (char c : word1) {
        freq_1[c]++;
    }

    // remove freq using word2
    for (auto c : word2) {
        if (freq_1[c] < 1) {
            return false;
        }
        freq_1[c]--;
    }

    // traverse freq, it should be empty for anagrams
    for (auto p : freq_1) {
        if (p.second != 0)
            return false;
    }
    return true;
}

int main() {
    string word1{"listen"};
    string word2{"silent"};

    if (is_anagram(word1, word2)) {
        cout << "Anagram";
    } else {
        cout << "Not Anagram";
    }
    cout << endl;
    return 0;
}
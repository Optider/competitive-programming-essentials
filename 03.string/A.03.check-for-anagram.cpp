#include <bits/stdc++.h>
using namespace std;

#define alpha_len 256

// T: O(N + CHAR)
// S: O(CHAR)
bool is_anagram_better(string word1, string word2) {
    if (word1.length() != word2.length()) {
        return false;
    }

    int alphabets[alpha_len]{};
    for (int i{}; i < word1.length(); i++) {
        alphabets[word1[i]]++;
        alphabets[word2[i]]--;
    }

    for (auto num : alphabets) {
        if (num != 0) {
            return false;
        }
    }
    return true;
}

// T: O(N)
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

    if (is_anagram_better(word1, word2)) {
        cout << "Anagram" << endl;
    } else {
        cout << "Not Anagram" << endl;
    }

    if (is_anagram(word1, word2)) {
        cout << "Anagram" << endl;
    } else {
        cout << "Not Anagram" << endl;
    }
    cout << endl;
    return 0;
}
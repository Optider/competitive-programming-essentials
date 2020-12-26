#include <bits/stdc++.h>
using namespace std;

void char_freq(string word) {
    int freq_counter[26]{};  // 26 english letters
    // freq of each letter
    for (auto ch : word) {
        freq_counter[ch - 'a']++;
    }

    // traverse freq_counter and print corres letter and freq
    for (int i{}; i < 26; i++) {
        if (freq_counter[i]) {
            cout << char(i + 'a') << " " << freq_counter[i] << endl;
        }
    }
}

int main() {
    string word{"thisiscpessentials"};
    char_freq(word);

    cout << endl;
    return 0;
}
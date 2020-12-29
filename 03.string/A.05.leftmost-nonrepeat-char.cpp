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

int first_nonrep(string word) {
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

    cout << first_nonrep(word) << endl;
    return 0;
}
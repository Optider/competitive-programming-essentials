#include <bits/stdc++.h>
using namespace std;

bool is_pali(const string &word, int start, int end) {
    // base case
    if(start >= end) {
        return true;
    }

    // recursive case
    if(word[start] != word[end]) {
        return false;
    }    
    
    return is_pali(word, start+1, end-1);
    
}

int main() {
    string word = "aaa";
    
    cout << is_pali(word, 0, word.length() -1) << endl;

    return 0;
}
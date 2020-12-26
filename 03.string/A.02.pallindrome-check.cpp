#include <bits/stdc++.h>
using namespace std;

// T: O(N)    Best case: Theta(1), Worst case: Theta(N)
// S: Theta(1)
bool is_pali_efficient(const string &str) {
    int begin{};
    // DONT use {}, use =. Bcoz, using .size()/length() with {} => gives compile error. Due to, size_t to int conversion
    int end = str.size() - 1;
    bool is_pali = true;

    while (begin < end) {
        if (str[begin] != str[end]) {
            is_pali = false;
            break;
        }
        begin++;
        end--;
    }
    return is_pali;
}

// T: Theta(N)
// S: Theta(N)
bool is_pali(const string &str) {
    string rev_str = str;
    reverse(rev_str.begin(), rev_str.end());
    return (str == rev_str);
}

int main() {
    string str = "ABBA";

    if (is_pali_efficient(str)) {
        cout << str << ": pallindrome" << endl;
    } else {
        cout << str << ": not palindrome" << endl;
    }

    if (is_pali(str)) {
        cout << str << ": pallindrome" << endl;
    } else {
        cout << str << ": not palindrome" << endl;
    }

    return 0;
}
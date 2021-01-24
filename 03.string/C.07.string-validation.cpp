/*  
    Problem: 
        Given a string s representing a password, you need to check if the string is valid or not. A valid string has the following properties:

        String must have the length greater than or equal to 10.
        String must contain at least 1 numeric character.
        String must contain at least 1 uppercase character.
        String must contain at least 1 lowercase character.
        String must contain at least 1 special character from @#$-*

    Test Cases:

        Input: eHello123@
        Output: 1
        Explanation: String is valid.

        Input: hella
        Output: 0
        Explanation: String is not valid.

*/

#include <bits/stdc++.h>
using namespace std;

bool validate(string s);
bool validate_alter(string s);

int main() {
    int t;
    string tc;
    getline(cin, tc);
    t = stoi(tc);
    while (t--) {
        string s;
        getline(cin, s);
        cout << validate(s) << endl;
        cout << validate_alter(s) << endl;
    }
    return 0;
}

// T: O(n)
// S: Theta(1)
bool validate(string s) {
    //Your code here
    if (s.size() < 10)
        return false;

    bool has_num = false, has_up = false, has_lo = false, has_sp = false;
    for (char ch : s) {
        if (ch >= '0' and ch <= '9')
            has_num = true;
        else if (ch >= 'a' and ch <= 'z')
            has_lo = true;
        else if (ch >= 'A' and ch <= 'Z')
            has_up = true;
        else if (ch == '@' or ch == '#' or ch == '$' or ch == '-' or ch == '*')
            has_sp = true;

        // if all conditions satisfied => string is valid
        if (has_num and has_up and has_lo and has_sp)
            return true;
    }
    return false;
}

// T: O(n)
// S: Theta(1)
/* LOGIC
    use built in functions
    bool isupper(char)
    bool islower(char)
    bool isdigit(char)
*/
bool validate_alter(string s) {
    if (s.length() < 10)
        return false;

    bool upper = false;
    bool lower = false;
    bool special = false;
    bool numeric = false;

    for (int i = 0; i < s.size(); i++) {
        if (isupper(s[i])) {
            upper = true;
        } else if (islower(s[i])) {
            lower = true;
        } else if (isdigit(s[i])) {
            numeric = true;
        } else {
            special = true;
        }

        // if all conditions satisfied => string is valid
        if (upper && lower && numeric && special)
            return true;
    }

    return upper && lower && numeric && special;
}
/*  
    Problem: 
        You are given a string s. You need to find if the string is a panagram or not.
        A panagram contains all the letters of english alphabet at least once.

    Test Cases:

        Input:
        s = Thequickbrownfoxjumpsoverthelazydog
        Output: 1

        Input:
        s = HeavyDuty
        Output: 0

*/

// T:
// S:
#include <bits/stdc++.h>
using namespace std;

bool isPanagram(string str);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        cout << isPanagram(s) << endl;
    }

    return 0;
}

// T: Theta(n) => Theta(n+26)
// S: Theta(const), const => 26
bool isPanagram(string s) {
    //Your code here

    if (s.length() < 26)
        return false;

    bool alpha[26] = {false};

    for (char ch : s) {
        if (ch >= 'a' and ch <= 'z')
            alpha[ch - 'a'] = true;
        else if (ch >= 'A' and ch <= 'Z')
            alpha[ch - 'A'] = true;
    }

    for (bool count : alpha)
        if (count == false)
            return false;
    return true;
}

/*  
    Problem:
        You are given a string s. You need to find the missing characters in the string to make a panagram.
        Note: The output characters will be lowercase and lexicographically sorted.

    Example 1:
        Input:
        s = Abcdefghijklmnopqrstuvwxy
        Output: z    

    Example 2:
        Input:
        s = Abc
        Output: defghijklmnopqrstuvwxyz
    
    Your Task:
        You only need to complete the function misssingPanagram() that takes s as parameter and returns -1 if the string is a panagram, else it returns a string that consists missing characters.

*/

#include <bits/stdc++.h>
using namespace std;

string missingPanagram(string str);
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        cout << missingPanagram(s) << endl;
    }
    return 0;
}

// T: Theta(N) => Theta(N+const)
// S: Theta(const)
string missingPanagram(string str) {
    //Your code here

    bool has_alpha[26] = {};

    for (char c : str) {
        if (c >= 'a' and c <= 'z') {
            has_alpha[c - 'a'] = true;
        } else if (c >= 'A' && c <= 'Z') {
            has_alpha[c - 'A'] = true;
        }
    }

    string res = {};
    for (int i = 0; i < 26; i++) {
        if (has_alpha[i] == false)
            res += 'a' + i;
    }

    if (res == "")
        return "-1";
    return res;
}

/*  
    Problem: You are given a string s. You need to convert the case of uppercase letters to lowercase letters.

    Test Cases:

        i/p: GeekS
        o/p: geeks

        i/p: FOR
        o/p: for

*/

#include <bits/stdc++.h>
using namespace std;

string caseConversion(string str);

int main() {
    int t;
    cin >> t;

    cin.ignore();  // for using getline after cin int
    while (t--) {
        string s;
        getline(cin, s);

        cout << caseConversion(s) << endl;
    }

    return 0;
}

// T: Theta(N)
// S: Theta(1)
/*  LOGIC
        a: 10
        A: 20
        we want lowercase (e.g. 'a')
        a-A, should be added

*/
string caseConversion(string str) {
    //Your code here
    int diff = 'a' - 'A';
    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'A' and str[i] <= 'Z') {
            str[i] = str[i] + diff;
        }
    }

    return str;
}

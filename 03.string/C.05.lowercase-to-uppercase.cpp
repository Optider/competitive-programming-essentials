/*  
    Problem: You are given a string s. You need to convert the case of lowercase letter to uppercase letters.

    Test Cases:

        i/p: Geeks
        o/p: GEEKS

        i/p: asf sfsf
        o/p: ASF SFSF

*/

#include <bits/stdc++.h>
using namespace std;

string caseConversion(string str);

int main() {
    int t;
    cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');  //clear buffer before taking new line

    while (t--) {
        string s;
        // cin >> s;
        getline(cin, s);

        cout << caseConversion(s) << endl;
    }

    return 0;
}

// T: Theta(N), N = |S|
// S: Theta(1)
/* 
    LOGIC
    -----
        Assume
        a: 20
        A: 30
        A-a: 10

        b => 21+ (A-a)
          =  21 + 10
          =  31 (B)
*/
string caseConversion(string str) {
    //Your code here
    int diff = 'A' - 'a';

    for (int i = 0; i < str.size(); i++) {
        if (str[i] >= 'a' and str[i] <= 'z')
            str[i] = str[i] + diff;
    }

    return str;
}

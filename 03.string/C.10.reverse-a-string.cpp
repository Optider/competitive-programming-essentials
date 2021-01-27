/*  
    Problem:
        You are given a string s. You need to reverse the string.

    Example 1:
        Input:
        s = Geeks
        Output: skeeG
        
    Example 2:
        Input:
        s = for
        Output: rof

*/

#include <bits/stdc++.h>
using namespace std;

string reverseWord(string str);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;

        cout << reverseWord(s) << endl;
    }
    return 0;
}

string reverseWord(string str) {
    //Your code here

    int i = 0;
    int j = str.size() - 1;

    while (i < j) {
        swap(str[i], str[j]);
        i++;
        j--;
    }
    return str;
}
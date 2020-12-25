// Problem: https://practice.geeksforgeeks.org/problems/non-repeating-character-1587115620/0/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

char nonrepeatingCharacter(string S);

int main() {
    int T;
    cin >> T;

    while (T--) {
        string S;
        cin >> S;

        char ans = nonrepeatingCharacter(S);

        if (ans != '$')
            cout << ans;
        else
            cout << "-1";

        cout << endl;
    }

    return 0;
}
// } Driver Code Ends

// Complete this function
char nonrepeatingCharacter(string S) {
    //Your code here
    unordered_map<int, int> freq{};
    for (auto c : S) {
        freq[c]++;
    }

    for (auto c : S) {
        if (freq[c] == 1) {
            return c;
        }
    }
    return '$';
}

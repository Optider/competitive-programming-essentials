/*  
    Problem: Given two strings a and b consisting of lowercase characters. Check whether two given strings are an anagram of each other or not.
    An anagram of a string is another string that contains the same characters, only the order of characters can be different. For example, “act” and “tac” are an anagram of each other.

    Example 1:

        Input:
        a = geeksforgeeks, b = forgeeksgeeks
        Output: YES

    Example 2:

        Input:
        a = allergy, b = allergic
        Output: NO
        
*/

#include <bits/stdc++.h>
using namespace std;

// T: Theta(N) => Theta(|a|+|b|)
// S: Theta(1)
/*  LOGIC:
        https://www.geeksforgeeks.org/check-whether-two-strings-are-anagram-of-each-other/
*/
bool isAnagram_better(string a, string b) {
    int sum_alpha = 0;

    if (a.size() != b.size())
        return false;

    // Take sum of all characters of first String
    // ASCII value is being added
    for (int i = 0; i < a.size(); i++) {
        sum_alpha += a[i];
    }

    // Subtract the Value of all the characters of second string
    for (int i = 0; i < b.size(); i++) {
        sum_alpha -= b[i];
    }

    // If Count = 0 then they are anagram
    // If count > 0 or count < 0 then they are not anagram
    if (sum_alpha == 0)
        return true;
    return false;
}

// T: Theta(N) => Theta(|a|+|b|)
// S: Theta(26)
bool isAnagram(string a, string b) {
    // Your code here
    int freq[26] = {};

    if (a.size() != b.size())
        return false;

    for (int i = 0; i < a.size(); i++) {
        freq[a[i] - 'a']++;
        freq[b[i] - 'a']--;
    }

    for (int i : freq) {
        if (i != 0)
            return false;
    }
    return true;
}

int main() {
    int t;

    cin >> t;

    while (t--) {
        string c, d;

        cin >> c >> d;

        if (isAnagram_better(c, d))
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}

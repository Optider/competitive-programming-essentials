/*  
    Problem: Given an integer, we need to find floor of its square root.

    Test Cases:

        i/p: 15
        o/p: 3
        
        i/p: 16
        o/p: 4        

*/

#include <bits/stdc++.h>
using namespace std;

// T: O(Log N)
// S: O(1)
int squareRootBetter(int key) {
    int left = 1, right = key;
    int mid = {};
    int potentialSquare = {};
    int ans = {};

    while (left <= right) {
        mid = left + (right - left) / 2;
        potentialSquare = mid * mid;

        if (potentialSquare == key)
            return mid;
        else if (potentialSquare < key) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;
}

// T: O(N)
// S: O(1)
int squareRoot(int key) {
    for (int i = 1; i < key; i++) {
        if (i * i == key)
            return i;
        else if (i * i > key)
            return i - 1;
    }
}

int main() {
    int n = {};
    cin >> n;

    cout << squareRootBetter(n) << endl;
    cout << squareRoot(n) << endl;
    return 0;
}
/*  
    Problem: Given an integer x, find the square root of x. If x is not a perfect square, then return floor(√x).

    Test Cases:

        i/p: 5
        o/p: 2

        i/p: 4
        o/p: 2

*/

#include <bits/stdc++.h>
using namespace std;

// T: O(log N)
// S: O(1)
long long int floorSqrt(long long int x) {
    // Your code goes here
    long long int left = {}, right = x, mid = {};
    long long int potentialSquare = {};
    long long int ans = {-1};

    while (left <= right) {
        mid = left + (right - left) / 2;
        potentialSquare = mid * mid;

        if (potentialSquare == x) {
            ans = mid;
            return ans;
        } else if (potentialSquare < x) {
            ans = mid;
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return ans;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        long long n;
        cin >> n;
        cout << floorSqrt(n) << endl;
    }
    return 0;
}
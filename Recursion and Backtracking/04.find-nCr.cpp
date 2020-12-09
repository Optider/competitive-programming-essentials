// Problem: https://practice.geeksforgeeks.org/problems/find-ncr/0/

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

//User function Template for C++

//Complete this function
int nCr(int n, int r) {
    //Your code here
    if (n == r) {
        return 1;
    } else {
    }
    if (n < r) {
        return 0;
    }
    if (r <= 1) {
        return n;
    }
    return nCr(n - 1, r - 1) + nCr(n - 1, r);
}

// { Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, r;
        cin >> n >> r;
        cout << nCr(n, r) << endl;
    }
    return 0;
}  // } Driver Code Ends
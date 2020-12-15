// Problem: https://practice.geeksforgeeks.org/problems/gcd-euclid/0/

// { Driver Code Starts
#include <iostream>
using namespace std;

int GCD(int a, int b);

int main() {
    int T;
    cin >> T;
    while (T--) {
        int a, b;
        cin >> a >> b;
        cout << GCD(a, b) << endl;
    }
    return 0;
}  // } Driver Code Ends

//User function Template for C++

int GCD(int a, int b) {
    //Your code here
    if (b == 0) {
        return a;
    }
    return GCD(b, a % b);
}

// NOTE:
// GCD * LCM = a * b
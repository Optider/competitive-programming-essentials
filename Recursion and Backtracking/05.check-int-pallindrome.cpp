// Problem: https://practice.geeksforgeeks.org/problems/check-palindrome/0/

#include <iostream>
using namespace std;

//User function Template for C++

int reverse(int num, int rev) {
    if (num == 0) {
        return rev;
    }
    return reverse(num / 10, rev * 10 + num % 10);
}

bool isPalin(int N) {
    //Your code here
    //You may use a helper function if you like
    if (reverse(N, 0) == N) {
        return 1;
    }
    return 0;
}

// { Driver Code Starts
int main() {
    int T;
    cin >> T;
    while (T--) {
        int N;
        cin >> N;
        cout << isPalin(N) << endl;
    }
    return 0;
}  // } Driver Code Ends

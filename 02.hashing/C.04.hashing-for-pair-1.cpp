// Problem: https://practice.geeksforgeeks.org/problems/hashing-for-pair-1/0/

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int sumExists(int arr[], int sizeOfArray, int sum);

// } Driver Code Ends

//User function Template for C++

//You need to complete this function, Geeks
int sumExists(int arr[], int N, int sum) {
    //Your code here.
    unordered_set<int> s{};

    int num1, num2{};
    for (int i{}; i < N; i++) {
        num1 = arr[i];
        num2 = sum - num1;

        if (s.find(num2) != s.end()) {
            return true;
        }
        s.insert(num1);
    }
    return false;
}

// { Driver Code Starts.

int main() {
    int testcases;
    cin >> testcases;
    while (testcases--) {
        int sizeOfArray;
        cin >> sizeOfArray;

        int arr[sizeOfArray];

        for (int i = 0; i < sizeOfArray; i++)
            cin >> arr[i];
        int sum;
        cin >> sum;

        cout << sumExists(arr, sizeOfArray, sum) << endl;
    }

    return 0;
}
// } Driver Code Ends
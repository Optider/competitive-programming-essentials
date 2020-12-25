// Problem: https://practice.geeksforgeeks.org/problems/hashing-for-pair-2/0/

// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

int sumExists(int arr[], int sizeOfArray, int sum);

// } Driver Code Ends

//User function Template for C++

//Complete this function
int sumExists(int arr[], int N, int sum) {
    //Your code here
    unordered_set<int> s{};

    int num1{}, num2{};
    for (int i{}; i < N; i++) {
        num1 = arr[i];
        num2 = sum - num1;

        if (s.count(num2) > 0) {
            return 1;
        }
        s.insert(num1);
    }
    return 0;
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
}  // } Driver Code Ends
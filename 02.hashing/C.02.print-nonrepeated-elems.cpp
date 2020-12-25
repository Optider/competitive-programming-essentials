// Problem: https://practice.geeksforgeeks.org/problems/print-distinct-elements-1587115620/0/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

vector<int> printNonRepeated(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> v;
        v = printNonRepeated(arr, n);

        for (int i = 0; i < v.size(); i++)
            cout << v[i] << " ";

        cout << endl;
    }
    return 0;
}

// } Driver Code Ends

// Function to print the non repeated elements in the array
// arr[]: input array
// n: size of array
// T: Theta(N)
// S: O(N)
vector<int> printNonRepeated(int arr[], int n) {
    //Your code here
    unordered_map<int, int> freq{};

    for (int i{}; i < n; i++) {
        freq[arr[i]]++;
    }

    vector<int> ans{};
    for (int i{}; i < n; i++) {
        if (freq[arr[i]] == 1) {
            ans.push_back(arr[i]);
        }
    }
    return ans;
}
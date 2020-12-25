// Problem:https://practice.geeksforgeeks.org/problems/count-distinct-elements-1587115620/1/

// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

int countNonRepeated(int arr[], int n);

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << countNonRepeated(arr, n) << endl;
    }
    return 0;
}
// } Driver Code Ends

//Complete this function

// T: Theta(N)
// S: O(N)
int countNonRepeated(int arr[], int n) {
    //Your code here
    unordered_map<int, int> freq;
    for (int i{}; i < n; i++) {
        freq[arr[i]]++;
    }
    int count_non_repeated{};
    for (auto it = freq.begin(); it != freq.end(); it++) {
        if (it->second == 1) {
            count_non_repeated++;
        }
    }
    return count_non_repeated;
}

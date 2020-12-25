// Problem: https://practice.geeksforgeeks.org/problems/winner-of-an-election-where-votes-are-represented-as-candidate-names-1587115621/0/

// { Driver Code Starts
#include <bits/stdc++.h>

#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <map>

using namespace std;

vector<string> winner(string arr[], int n);

int main() {
    int t;
    cin >> t;

    for (int i = 0; i < t; i++) {
        int n;
        cin >> n;

        string arr[n];

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<string> result = winner(arr, n);

        cout << result[0] << " " << result[1] << endl;
    }
    return 0;
}
// } Driver Code Ends

// Funtion to find winner
// arr[]: input array
// n: size of array

// BETTER (one string traversal and one hash traversal)
vector<string> winner(string arr[], int n) {
    unordered_map<string, int> freq{};

    // create freq counter
    for (int i{}; i < n; i++) {
        freq[arr[i]]++;
    }

    // traverse freq counter to find max-value and key
    int max_votes{INT_MIN};
    string candiate{};
    for (auto f : freq) {
        if (f.second > max_votes) {
            max_votes = f.second;
            candiate = f.first;
        } else if (f.second == max_votes and f.first.compare(candiate) < 0) {
            candiate = f.first;
        }
    }

    vector<string> ans{};
    ans.push_back(candiate);
    ans.push_back(to_string(max_votes));
    return ans;
}

// Less-efficient (one string traversal and 2 hash traversal)
vector<string> winner_less_optimal(string arr[], int n) {
    // Your code here
    // Return the string containing the name and an integer
    // representing the number of votes the winning candidate got

    map<string, int> freq{};

    // create freq counter
    for (int i{}; i < n; i++) {
        freq[arr[i]]++;
    }

    // traverse freq counter to find max-value
    int max_votes{};
    for (auto f : freq) {
        max_votes = max(max_votes, f.second);
    }

    // again traverse freq counter and 1st pair with max_votes is ans
    vector<string> ans{};
    for (auto f : freq) {
        if (f.second == max_votes) {
            ans.push_back(f.first);
            ans.push_back(to_string(f.second));
            break;
        }
    }
    return ans;
}
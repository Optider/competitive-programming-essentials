#include <bits/stdc++.h>
using namespace std;

// T: Theta(N)
// S: O(N)
void count_freq_better(int arr[], int n) {
    unordered_map<int, int> freq{};
    for (int i{}; i < n; i++) {
        /* // one line way to achieve same

        if (freq.count(arr[i])) {
            freq[arr[i]] += 1;
        } else {
            freq.insert({arr[i], 1});
        }
        */
        ++freq[arr[i]];
    }

    for (auto it = freq.begin(); it != freq.end(); it++) {
        cout << (*it).first << " " << it->second << endl;
    }
    cout << "\nALTER PRINT\n";
    for (auto elem : freq) {
        cout << elem.first << " " << elem.second << endl;
    }
}

// T: Theta(N^2)
// S: O(N)
void count_freq_naive(int arr[], int n) {
    for (int i{}; i < n; i++) {
        // check if arr[i] is accounted aleady
        bool is_ith_accounted = false;
        for (int j{}; j < i; j++) {
            if (arr[i] == arr[j]) {
                is_ith_accounted = true;
                break;
            }
        }

        // if accounted already then skip current i
        if (is_ith_accounted == true) {
            continue;
        }

        // else, find freq of it, by counting occurence in remaining arr
        int freq = 1;
        for (int j{i + 1}; j < n; j++) {
            if (arr[j] == arr[i]) {
                freq++;
            }
        }
        cout << arr[i] << " " << freq << endl;
    }
}

int main() {
    int arr[]{10, 10, 10, 10, 24, 24};
    int n = sizeof(arr) / sizeof(arr[0]);
    count_freq_better(arr, n);

    cout << "\nUsing naive:" << endl;

    count_freq_naive(arr, n);
    return 0;
}
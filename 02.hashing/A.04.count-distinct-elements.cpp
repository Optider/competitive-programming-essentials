// Problem:

#include <bits/stdc++.h>
using namespace std;

// T: Theta(N)
// S: O(N)
int count_distinct_better(int *nums, int n) {
    unordered_set<int> distinct_nums(nums, nums + n);  // initialization using constructor
    return distinct_nums.size();
}

// T: Theta(N)
// S: O(N)
int count_distinct(int *nums, int n) {
    unordered_set<int> distinct_nums{};
    for (int i{}; i < n; i++) {
        distinct_nums.insert(nums[i]);
    }

    return distinct_nums.size();
}

int main() {
    // int arr[]{15, 12, 13, 12, 13, 13, 18};
    // int arr[]{10, 10, 10};
    int arr[]{10, 11, 12};

    int n = sizeof(arr) / sizeof(arr[0]);
    cout << count_distinct(arr, n) << endl;
    cout << count_distinct_better(arr, n) << endl;
    return 0;
}
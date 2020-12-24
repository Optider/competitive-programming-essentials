// Problem:

#include <bits/stdc++.h>
using namespace std;

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
    cout << count_distinct(arr, n);
    cout << endl;
    return 0;
}
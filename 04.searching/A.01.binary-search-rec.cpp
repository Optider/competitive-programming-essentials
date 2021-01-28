/*  
    Problem: Given a list of nums, we need to print index of key, if it is present, else -1.

    Test Cases:

        i/p: nums=10 20 30 40 50 60
             x=20
        o/p: 1

        i/p: nums=10 10
             x=10
        o/p: 0 or 1

*/

#include <bits/stdc++.h>
using namespace std;

// T:
// S:
int binarySearchRec(int nums[], int n, int key, int left, int right) {
    int mid = (left + right) / 2;

    // base case
    if (left > right)
        return -1;

    // recursive case
    if (key == nums[mid])
        return mid;
    if (key < nums[mid]) {
        right = mid - 1;
        return binarySearchRec(nums, n, key, left, right);
    } else {
        left = mid + 1;
        return binarySearchRec(nums, n, key, left, right);
    }
}

int main() {
    int n = 0;
    int key = 0;

    cin >> n >> key;
    int nums[n] = {0};
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << binarySearchRec(nums, n, key, 0, n - 1) << endl;
}
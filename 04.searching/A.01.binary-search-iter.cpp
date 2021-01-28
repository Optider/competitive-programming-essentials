/*  
    Problem: Given a list of nums, we need to print index of key, if it is present, else -1.

    Test Cases:

        i/p: n=6, x=20
             nums=10 20 30 40 50 60
        o/p: 1

        i/p: n=2, x=10
             nums=10 10
        o/p: 0 or 1

*/

#include <bits/stdc++.h>
using namespace std;

// T: O(LogN)
// S: O(1)
int binarySearchIter(int nums[], int n, int key) {
    int left = 0;
    int right = n - 1;
    int mid = 0;

    while (left <= right) {
        // mid = (left + right) / 2;
        mid = left + (right - left) / 2;  // this wont cause overflow

        if (key == nums[mid])
            return mid;
        else if (key < nums[mid])
            right = mid - 1;
        else
            left = mid + 1;
    }
    return -1;
}

int main() {
    int n = 0;
    int key = 0;

    cin >> n >> key;
    int nums[n] = {0};
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    cout << binarySearchIter(nums, n, key) << endl;
}
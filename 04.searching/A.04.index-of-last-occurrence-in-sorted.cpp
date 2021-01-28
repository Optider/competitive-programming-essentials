/*  
    Problem: Given a sorted array with repetition and an element x, we need to find index of last occurrence of x.

    Test Cases:

        i/p:
            n = 6, x = 20
            nums = 10 15 20 20 40 40
        o/p: 3

        i/p:
            n = 3, x = 15
            nums = 10 20 30
        o/p: -1

        i/p:
            n = 3, x = 15
            nums = 15 15 15
        o/p: 2

*/

#include <bits/stdc++.h>
using namespace std;

// T: O(Log N)
// S: O(1)
int idxLastOccurBetter(int arr[], int n, int key) {
    int left = 0;
    int right = n - 1;
    int mid = {};

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (key < arr[mid]) {
            right = mid - 1;
        } else if (key > arr[mid]) {
            left = mid + 1;
        } else {
            // key found
            // if this is last occur
            if (mid == n - 1 or (arr[mid] != arr[mid + 1]))
                return mid;
            else
                left = mid + 1;
        }
    }
    return -1;
}

// T: O(N)
// S: O(1)
int idxLastOccur(int arr[], int n, int key) {
    for (int i = n - 1; i >= 0; i--)
        if (arr[i] == key)
            return i;
    return -1;
}

int main() {
    int n = 0, key = 0;
    cin >> n >> key;

    int arr[n] = {};
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << idxLastOccurBetter(arr, n, key) << endl;
    cout << idxLastOccur(arr, n, key) << endl;
    return 0;
}
/*  
    Problem: Given a sorted array with repetition and an element x, we need to find index of first occurrence of x.

    Test Cases:

        i/p:
            n = 7, x = 20
            nums = 1 10 10 10 20 20 40
        o/p: 4

        i/p:
            n = 3, x = 15
            nums = 10 20 30
        o/p: -1

        i/p:
            n = 3, x = 15
            nums = 15 15 15
        o/p: 0

*/

#include <bits/stdc++.h>
using namespace std;

// T: O(Log N)
// S: O(1)
int idxFirstOccurBetter(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    int mid = 0;

    while (low <= high) {
        mid = low + (high - low) / 2;

        if (key == arr[mid]) {
            // if this is 1st occurence
            if (mid == 0 or (arr[mid] != arr[mid - 1]))
                return mid;
            else
                high = mid - 1;
        } else if (key < arr[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    return -1;
}

// T: O(N)
// S: O(1)
int idxFirstOccur(int arr[], int n, int key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key)
            return i;
    }
    return -1;
}

int main() {
    int n = 0, key = 0;
    cin >> n >> key;

    int arr[n] = {};
    for (int i = 0; i < n; i++)
        cin >> arr[i];

    cout << idxFirstOccurBetter(arr, n, key) << endl;
    cout << idxFirstOccur(arr, n, key) << endl;
    return 0;
}
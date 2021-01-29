/*  
    Problem: Given a binary sorted non-increasing array of 1s and 0s. You need to print the count of 1s in the binary array.

    Test Cases:
        Input:
            N = 8
            arr[] = {1,1,1,1,1,0,0,0}
        Output: 5

        Input:
            N = 8
            arr[] = {1,1,0,0,0,0,0,0}
        Output: 2

*/

#include <bits/stdc++.h>
using namespace std;

// T: O(Log N)
// S: O(1)
int countOnes(int arr[], int N) {
    int left = {}, right = N - 1;
    int mid = {};

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (arr[mid] == 1) {
            // key found
            // if it is last occurence of 1
            if (mid == N - 1 or (arr[mid] != arr[mid + 1])) {
                return mid + 1;
            } else {
                left = mid + 1;
            }

        } else if (arr[mid] == 0) {
            // search in left half
            right = mid - 1;
        }
    }
    return 0;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int *arr = new int[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        cout << countOnes(arr, n) << endl;
    }
    return 0;
}

/*  
    Problem: Given a sorted array of size N and an integer K. Check if K is present in the array or not.

    Test Cases:

        Input:
            N = 5, K = 6
            arr[] = {1,2,3,4,6}
        Output: 1

        Input:
            N = 5, K = 2
            arr[] = {1,3,4,5,6}
        Output: -1

*/

#include <bits/stdc++.h>
using namespace std;

// T: O(Log N)
// S: O(1)
int searchInSorted(int arr[], int N, int K) {
    int left = {}, right = N - 1;
    int mid = {};

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (arr[mid] == K)
            return 1;
        if (arr[mid] < K)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main(void) {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;

        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << searchInSorted(arr, n, k) << endl;
    }

    return 0;
}
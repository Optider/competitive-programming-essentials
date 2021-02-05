/*  
    Partition method of Quick Sort. This partitioning method is a naive way of approach towards partitioning an array.
    
    Input: arr, left, right, partition
            Here, partition is index of elem to be partitioned
    Output: <...smaller elems>, arr[partition], <...greater elems>
*/

#include <bits/stdc++.h>
using namespace std;

// T: O(n), 3 traversals
// S: O(n)
void partition(int arr[], int left, int right, int p) {
    int n = right - left + 1;
    int temp[n] = {};

    // copy elems <= arr[p] to temp
    int idx = {};
    for (int i = left; i <= right; i++) {
        if (arr[i] <= arr[p])
            temp[idx++] = arr[i];
    }

    // copy elems > arr[p] to temp
    for (int i = left; i <= right; i++) {
        if (arr[i] > arr[p])
            temp[idx++] = arr[i];
    }
    // copy temp to arr[left: right+1]
    for (int i = left; i <= right; i++) {
        arr[i] = temp[i - left];
    }
}

int main() {
    int arr[] = {5, 13, 6, 9, 12, 11, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int x : arr)
        cout << x << " ";
    cout << endl;

    partition(arr, 0, n - 1, n - 1);

    for (int x : arr)
        cout << x << " ";
    cout << endl;

    return 0;
}

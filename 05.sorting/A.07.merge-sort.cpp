/* 
    Merge Sort (Divide & Conquer Strategy)
*/

#include <bits/stdc++.h>
using namespace std;

/*
    Merges 2 sorted arrays.
    From [left to mid] and from [mid+1 to right]
*/
void merge(int arr[], int left, int mid, int right) {
    // size of sorted arrays
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int firstArr[n1] = {}, secondArr[n2] = {};

    for (int i = 0; i < n1; i++)
        firstArr[i] = arr[left + i];
    for (int j = 0; j < n2; j++)
        secondArr[j] = arr[mid + 1 + j];

    // i and j are counters for sorted arrays
    int i = 0, j = 0;
    // k is pointer to merged array
    int k = left;
    while (i < n1 and j < n2) {
        // arr1 is from left to mid and arr2 is from mid+1 to right (all inclusive)
        if (firstArr[i] <= secondArr[j]) {
            arr[k++] = firstArr[i++];
        } else {
            arr[k++] = secondArr[j++];
        }
    }

    while (i < n1) {
        arr[k++] = firstArr[i++];
    }

    while (j < n2) {
        arr[k++] = secondArr[j++];
    }
}

void mergeSort(int arr[], int left, int right) {
    // base case
    if (left >= right)
        return;

    // recursive case
    // sort 2 halves and merge them

    int mid = left + (right - left) / 2;

    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);
    merge(arr, left, mid, right);
}

int main() {
    int arr[] = {2, 6, 4, 1, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);
    for (int i : arr)
        cout << i << " ";
    cout << endl;

    return 0;
}

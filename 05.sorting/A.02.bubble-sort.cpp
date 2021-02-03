/*  
    Bubble Sort
*/

#include <bits/stdc++.h>
using namespace std;

// T: O(n^2)
// S: O(1)
void bubbleSortBetter(int arr[], int n) {
    bool isModified = false;

    for (int i = 0; i <= n - 2; i++) {
        isModified = false;
        for (int j = 0; j <= n - 2 - i; j++) {
            // swap
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                isModified = true;
            }
        }

        // if swapping not occurs means, arr is sorted
        if (isModified == false)
            break;
    }
}

// T: Theta(n^2)
// S: O(1)
void bubbleSort(int arr[], int n) {
    for (int i = 0; i <= n - 2; i++) {
        for (int j = 0; j <= n - 2 - i; j++) {
            // swap
            if (arr[j] > arr[j + 1])
                swap(arr[j], arr[j + 1]);
        }
    }
}

int main() {
    int arr[] = {2, 6, 4, 1, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    bubbleSort(arr, n);
    bubbleSortBetter(arr, n);

    for (int n : arr)
        cout << n << " ";
    cout << endl;
    return 0;
}
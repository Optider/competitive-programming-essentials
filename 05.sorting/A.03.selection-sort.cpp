/*  
    Selection Sort
*/

#include <bits/stdc++.h>
using namespace std;

// T: Theta(n^2)
// S: O(1)
void selectionSort(int arr[], int n) {
    int minIndex = 0;
    for (int i = 0; i < n - 1; i++) {
        minIndex = i;
        for (int j = i + 1; j < n; j++) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
    }
}

int main() {
    int arr[] = {10, 8, 6, 4, 7, 2};
    int n = sizeof(arr) / sizeof(arr[0]);

    selectionSort(arr, n);

    for (int i : arr) {
        cout << i << " ";
    }

    cout << endl;
    return 0;
}
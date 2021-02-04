/*  
    Insertion Sort
*/

#include <bits/stdc++.h>
using namespace std;

// T: Theta(n^2)
// S: O(1)
void insertionSort(vector<int> &arr, int n) {
    int sortedIdx = {};
    int cur = {};
    for (int i = 1; i < n; i++) {
        sortedIdx = i - 1;
        cur = arr[i];

        while (sortedIdx >= 0 and arr[sortedIdx] > cur) {
            arr[sortedIdx + 1] = arr[sortedIdx];
            sortedIdx--;
        }
        arr[sortedIdx + 1] = cur;
    }
}

int main() {
    vector<int> arr = {2, 6, 4, 1, 10, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    insertionSort(arr, n);

    for (int i : arr) {
        cout << i << " ";
    }
    cout << endl;
    return 0;
}

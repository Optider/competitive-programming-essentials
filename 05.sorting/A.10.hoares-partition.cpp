/*  
    Hoare Partition is another method of partitioning. This is better than the previously discussed Partitioning method (Lomuto). This method takes constant space and O(n) time for partitioning. It also travels the input array only once.

    NOTE:
        In this algo, pivot is NOT placed at correct place. Just elems on both half of returned index, are lesser and greater resp to the pivot.
        Pivot might be present in any half of the array.

        Hoare and Lomuto are NOT stable sort.
        While Naive partition is Stable sort.
        Overall, Hoare is better than Lomuto in terms of comparisons done.
*/

#include <bits/stdc++.h>
using namespace std;

// T: Theta(n)
// S: O(1)
int hoarePartition(int arr[], int left, int right) {
    int pivot = arr[left];
    int i = left - 1;
    int j = right + 1;

    while (true) {
        // traverse for i
        do {
            i++;
        } while (arr[i] < pivot);

        // traverse for j
        do {
            j--;
        } while (arr[j] > pivot);

        if (i >= j)
            return j;
        swap(arr[i], arr[j]);
    }
}

int main() {
    int arr[] = {5, 3, 8, 4, 2, 7, 1, 10};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int n : arr)
        cout << n << " ";
    cout << endl;

    cout << "Partition index: " << hoarePartition(arr, 0, n - 1) << endl;

    for (int n : arr)
        cout << n << " ";
    cout << endl;
    return 0;
}
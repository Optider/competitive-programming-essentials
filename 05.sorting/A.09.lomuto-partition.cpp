/*  
    Lomuto Partition is another method of partitioning. In this method, the traversal is done only once with a constant space complexity.

    Dry run and Logic at end of file.
*/

#include <bits/stdc++.h>
using namespace std;

// T: Theta(n) one traversal only
// S: O(1)
int lomutoPartition(int arr[], int left, int right) {
    int i = left - 1;
    int pivot = right;  // always last element

    for (int j = left; j <= right - 1; j++) {
        if (arr[j] <= arr[pivot]) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[pivot]);
    return i + 1;
}

int main() {
    int arr[] = {10, 80, 30, 90, 40, 50, 70};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << "Partition index:" << lomutoPartition(arr, 0, n - 1) << endl;
    for (int n : arr)
        cout << n << " ";
    cout << endl;
    return 0;
}

/* Lomuto Partition
-------------------

NOTE:
    Modified version: if you want to consider any input as pivot => swap it with last elem and follow the same approach

Idea:
    Partition elem is always considered to be last elem
    Create regions in arrays.
    Elems from 0 to i       are <= pivot
    Elems from i+1 to j-1   are >  pivot
    Cur elem under test is j

Dry Run:
10 80 30 90 40 50 70

  i = -1
  j = 0
  pivot = 70

1. 
  j = 0
  10 < 70
  i = 0
  50 80 30 90 40 10 70

2.
  j = 1
  80 > 70

3. 
  j = 2
  30 < 70
  i = 1
  50 30 80 90 40 10 70

4.
  j = 3
  90 > 70

5.
  j = 4
  40 < 70
  i = 2
  50 30 40 90 80 10 70

6. 
  j = 5
  10 < 70
  i = 3
  50 30 40 10 80 90 70

7.
  j = 6 > (right-1)
  break

swap(i+1, pivot)
  50 30 40 10 70 90 80
            i  p  j
return i+1 => 4

*/

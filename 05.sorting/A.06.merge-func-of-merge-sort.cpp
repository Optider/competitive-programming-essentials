/*  
    Take a single array with three points namely, the lower, the middle and the highest point. The elements from the lower to the middle are sorted and the elements from the (middle+1) to the higher are sorted. The task is to merge these two sorted parts into one.
*/

#include <bits/stdc++.h>
using namespace std;

// T: Theta(m+n)
// S: Theta(m+n)
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int firstArr[n1] = {};
    int secondArr[n2] = {};

    for (int i = 0; i < n1; i++)
        firstArr[i] = arr[left + i];

    for (int j = 0; j < n2; j++)
        secondArr[j] = arr[mid + 1 + j];

    int i = 0, j = 0;
    int k = left;

    while (i < n1 and j < n2) {
        if (firstArr[i] <= secondArr[j])
            arr[k++] = firstArr[i++];
        else
            arr[k++] = secondArr[j++];
    }

    while (i < n1)
        arr[k++] = firstArr[i++];
    while (j < n2)
        arr[k++] = secondArr[j++];
}

int main() {
    int a[] = {10, 15, 20, 40, 8, 11, 15, 22, 25};
    int l = 0, h = 8, m = 3;

    merge(a, l, m, h);
    for (int x : a)
        cout << x << " ";
    cout << endl;
    return 0;
}
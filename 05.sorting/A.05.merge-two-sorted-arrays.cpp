/*  
    Take two sorted arrays and merge them (print merged).
*/

#include <bits/stdc++.h>
using namespace std;

// T: Theta(m+n) <=> Theta(max(m, n))
// S: O(1)
void merge(int a[], int b[], int m, int n) {
    int i = 0, j = 0;
    while (i < m and j < n) {
        if (a[i] <= b[j])
            cout << a[i++] << " ";
        else
            cout << b[j++] << " ";
    }

    while (i < m)
        cout << a[i++] << " ";
    while (j < n)
        cout << b[j++] << " ";
}

// T: Theta(nlogn)
// S: Theta(m+n)
void mergeNaive(int a[], int b[], int m, int n) {
    int mergedArray[m + n] = {};
    for (int i = 0; i < m; i++)
        mergedArray[i] = a[i];

    for (int i = 0; i < n; i++)
        mergedArray[m + i] = b[i];

    // sort it
    sort(mergedArray, mergedArray + (m + n));

    for (int i : mergedArray)
        cout << i << " ";
}

int main() {
    int a[] = {10, 15, 20, 40};
    int b[] = {5, 6, 6, 10, 15};

    int m = sizeof(a) / sizeof(a[0]);
    int n = sizeof(b) / sizeof(b[0]);
    merge(a, b, m, n);
    cout << endl;
    mergeNaive(a, b, m, n);
    cout << endl;
    return 0;
}
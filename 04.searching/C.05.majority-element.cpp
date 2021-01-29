/*  
    Problem: Given an array A of N elements. Find the majority element in the array. A majority element in an array A of size N is an element that appears more than N/2 times in the array.

    Test Cases:

    Input:
        N = 3 
        A[] = {1,2,3} 
    Output:
        -1

    Input:
        N = 5 
        A[] = {3,1,3,3,2} 
    Output:
        3
    Explanation:
        Since, 3 is present more than N/2 times, so it is the majority element.

    Expected Time Complexity: O(N).
    Expected Auxiliary Space: O(1).

*/

#include <bits/stdc++.h>
using namespace std;

// T: O(N)
// S: O(1)
/* LOGIC:
    Moore's voting algorithm

 */
int majorityElement(int a[], int size) {
}

// T: O(N)
// S: O(N)
int majorityElement(int a[], int size) {
    unordered_map<int, int> freq = {};

    for (int i = 0; i < size; i++) {
        freq[a[i]]++;
        if (freq[a[i]] > (size / 2))
            return a[i];
    }
    return -1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        cout << majorityElement(arr, n) << endl;
    }

    return 0;
}

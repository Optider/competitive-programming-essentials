/*  
    Problem: Given an integer array and another integer element. The task is to find if the given element is present in array or not.

    Test Cases:

        i/p: 
            N = 4
            Arr[] = {1,2,3,4}
            X = 3
        o/p: 2

        i/p:
            N = 5
            Arr[] = {1,2,3,4,5}
            X = 5        
        o/p: 4

*/

#include <bits/stdc++.h>
using namespace std;

// T: O(N)
// S: O(1)
/* LOGIC:
    NOTE: Array might not be SORTED!
*/
int search(int arr[], int N, int X) {
    for (int i = 0; i < N; i++) {
        if (arr[i] == X)
            return i;
    }
    return -1;
}

int main() {
    int testcases;
    cin >> testcases;
    while (testcases--) {
        int sizeOfArray;
        cin >> sizeOfArray;
        int arr[sizeOfArray];
        int x;

        for (int i = 0; i < sizeOfArray; i++) {
            cin >> arr[i];
        }
        cin >> x;
        cout << search(arr, sizeOfArray, x) << endl;  //Linear search
    }

    return 0;
}
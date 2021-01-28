/*  
    Problem: Given a sorted binary array, we need to count 1s in this array.
    
    Test Cases:

        i/p:
            nums: 0 0 0 1 1 1 1
        o/p: 4

        i/p:
            nums: 1 1 1 1 1
        o/p: 5

        i/p:
            nums: 0 0 0 0
        o/p: 0

*/

#include <bits/stdc++.h>
using namespace std;

// T: O(Log N)
// S: O(1)
/* LOGIC:
    similar to find index of 1st occurence of an elem
*/
int countOnesBetter(int nums[], int n) {
    int left = 0, right = n - 1;
    int mid = {};

    while (left <= right) {
        mid = left + (right - left) / 2;

        if (nums[mid] < 1) {
            left = mid + 1;
        } else if (nums[mid] == 1) {
            // if this is first 1
            if (mid == 0 or (nums[mid] != nums[mid - 1]))
                return n - mid;
            else
                right = mid - 1;
        }
    }
    return 0;
}

// T: O(N)
// S: O(1)
int countOnes(int nums[], int n) {
    for (int i = 0; i < n; i++) {
        if (nums[i] == 1)
            return n - i;
    }
    return 0;
}

int main() {
    int n = {};
    cin >> n;

    int nums[n] = {};
    for (int i = 0; i < n; i++)
        cin >> nums[i];

    cout << countOnesBetter(nums, n) << endl;
    cout << countOnes(nums, n) << endl;
    return 0;
}
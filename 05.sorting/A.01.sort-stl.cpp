/*  
    Using sort() in cpp STL
    1. arrays and vector
    2. descending order
    3. custom sort
*/

#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

/* 
    Return true for sort conditions, you want to have.
    Like, ascending means prev elem < next elem
    so, it will have =>
    if(a.x < b.x) return true
    else return false
*/
bool customCmp(Point a, Point b) {
    if (a.x < b.x)  // will do ascending order
        return true;
    return false;
}

int main() {
    // Arrays sort

    int arr[] = {2, 6, 1, 7, 7, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);

    for (int a : arr)
        cout << a << " ";
    cout << endl;

    // Descending order

    sort(arr, arr + n, greater<int>());
    for (int a : arr)
        cout << a << " ";
    cout << endl;

    // Vectors sort

    vector<int> nums = {12, 16, 11, 17, 17, 13};
    sort(nums.begin(), nums.end());

    for (int a : nums)
        cout << a << " ";
    cout << endl;

    // Custom sort
    Point pointsArr[] = {{3, 10}, {1, 8}, {2, 8}, {3, 8}, {5, 4}};
    n = sizeof(pointsArr) / sizeof(pointsArr[0]);
    sort(pointsArr, pointsArr + n, customCmp);
    for (auto a : pointsArr)
        cout << a.x << " " << a.y << endl;
    cout << endl;

    return 0;
}

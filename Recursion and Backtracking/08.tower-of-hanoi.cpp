// Problem: https://practice.geeksforgeeks.org/problems/tower-of-hanoi-1587115621/1/

// { Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends

class Solution {
   public:
    // You need to complete this function

    // avoid space at the starting of the string in "move disk....."
    long long toh(int N, int from, int to, int aux) {
        // Your code here

        int count{};
        if (N < 1) {
            return count;  // 0
        }

        // move top n-1 disks to aux
        count += toh(N - 1, from, aux, to);
        // move nth disk to destination
        cout << "move disk " << N << " from rod " << from << " to rod " << to << endl;
        count++;
        // move rest(n-1) disks from aux to destination
        count += toh(N - 1, aux, to, from);
        return count;
    }
};

// { Driver Code Starts.
int main() {
    int T;
    cin >> T;  //testcases
    while (T--) {
        long long moves = 0;
        int N;
        cin >> N;  //taking input N

        //calling toh() function
        Solution ob;
        moves = ob.toh(N, 1, 3, 2);
        cout << moves << endl;
    }
    return 0;
}

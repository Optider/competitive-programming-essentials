#include <bits/stdc++.h>
using namespace std;

int sum_of_digits(const int &num, int ans=0) {
    // base case
    if(num<=0) {
        return ans;
    }

    // recursive case
    return sum_of_digits(num/10, ans + num%10);
}

int main() {

    int num = 1234;
    
    cout << sum_of_digits(num) << endl;
    return 0;
}
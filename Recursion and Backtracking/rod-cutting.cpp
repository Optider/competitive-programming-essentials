#include <bits/stdc++.h>
using namespace std;

int max_cuts(int n, int a, int b, int c) {
    // base case
    if(n == 0) {
        return 0;
    } else if (n < 0) {
        return -1;
    }
    
    // recursive case

    int cuts_with_a {}, cuts_with_b {}, cuts_with_c {}, ans {};

    cuts_with_a = max_cuts(n-a, a, b, c);
    cuts_with_b = max_cuts(n-b, a, b, c);
    cuts_with_c = max_cuts(n-c, a, b, c);
    ans = max(cuts_with_a, max(cuts_with_b, cuts_with_c));

    if(ans >= 0) {
        return ans+1;
    } else {
        return -1;
    }
}

int main() {
    
    int n {}, a {}, b {}, c{};
    cin >> n >> a >> b >> c;
    
    cout << max_cuts(n, a, b, c) << endl;
    return 0;
}
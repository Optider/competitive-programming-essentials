#include <bits/stdc++.h>
using namespace std;

void solve(int no_of_disks, char initial_tower, char final_tower, char helping_tower) {
    // base case
    if(no_of_disks==1) {
        cout << "Move disk " << no_of_disks << " from " << initial_tower << " to " << final_tower << endl;
        return;
    }

    // recursive case
    // move n-1 disks from initial_tower to helping_tower using final_tower
    solve(no_of_disks-1, initial_tower, helping_tower, final_tower);
    
    // move last disk remaining from initial_tower to final_tower using helping_tower
    cout << "Move disk " << no_of_disks << " from " << initial_tower << " to " << final_tower << endl;

    // move rest of towers shifted in step 1 from helping_tower to final_tower using inital_tower
    solve(no_of_disks-1, helping_tower, final_tower, initial_tower);
}

int main() {
    
    solve(3, 'A', 'C', 'B');
    cout << endl;
    return 0;
}
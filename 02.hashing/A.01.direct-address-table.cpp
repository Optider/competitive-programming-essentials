// implementation of DAT

#include <bits/stdc++.h>
using namespace std;

struct DAT {
    int table[1000]{};

    void insert(int idx) {
        table[idx] = 1;
    }
    bool search(int idx) {
        return table[idx];
    }
    void del(int idx) {
        table[idx] = 0;
    }
};

int main() {
    DAT t;
    t.insert(2);
    t.insert(12);
    t.insert(22);
    t.insert(42);

    cout << t.search(42) << endl;
    cout << t.search(98) << endl;

    t.del(42);
    cout << t.search(42) << endl;

    cout << endl;
    return 0;
}
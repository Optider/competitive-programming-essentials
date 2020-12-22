#include <bits/stdc++.h>
using namespace std;

struct hash_chaining {
    list<int> *table;
    int bucket;

    hash_chaining(int bucket_size) {
        bucket = bucket_size;
        table = new list<int>[bucket];
    }

    void insert(int value) {
        int key = value % bucket;

        table[key].push_back(value);
    }

    bool search(int value) {
        int key = value % bucket;
        for (auto it : table[key]) {
            if (it == value) {
                return true;
            }
        }
        return false;
    }

    void del(int value) {
        int key = value % bucket;
        table[key].remove(value);
    }
};

int main() {
    hash_chaining hc(7);
    hc.insert(8);
    hc.insert(18);
    hc.insert(28);

    cout << hc.search(8) << endl;

    hc.del(8);

    cout << hc.search(8) << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

struct open_addressing {
    int bucket;
    int size;
    int *table;

    open_addressing(int bucket_size) {
        bucket = bucket_size;
        size = 0;
        table = new int[bucket];
        for (int i{}; i < bucket; i++) {
            table[i] = -1;  // -1 means, slot is empty
        }
    }

    int hash(int value) {
        return value % bucket;
    }

    bool insert(int value) {
        if (size == bucket) {
            return false;
        }

        int modified_key = hash(value);

        // cases when we have to increment modified_key are:
        // neither slot is empty, and nor deleted, and nor value is already present
        while (table[modified_key] != -1 and table[modified_key] != -2 and table[modified_key] != value) {
            // another logic to achieve same is:
            // cases when we can stop incrementing. Except those we have to increment.
            // while (!(table[arr] == -1 or table[modified_key] != -2 or table[modified_key] != value))
            modified_key = (modified_key + 1) % bucket;  // +1 is for linear probing. This changes in quadratic prob, and double hashing
        }
        if (table[modified_key] == value) {  // value is already present
            return false;
        }
        table[modified_key] = value;
        size++;
        return true;
    }

    bool search(int value) {
        int key = hash(value);
        int modified_key = key;
        bool is_present = false;

        // cases when we have to increment: slot is not empty
        while (table[modified_key] != -1) {
            if (table[modified_key] == value) {
                is_present = true;
                break;
            }
            modified_key = (modified_key + 1) % bucket;  // +1 is for linear probing. This changes in quadratic prob, and double hashing
            if (modified_key == key) {
                break;
            }
        }
        return is_present;
    }

    bool del(int value) {
        int key = hash(value);
        int modified_key = key;
        bool is_present = false;

        while (table[modified_key] != -1) {
            if (table[modified_key] == value) {
                is_present = true;
                table[modified_key] = -2;
                size--;
                break;
            }
            modified_key = (modified_key + 1) % bucket;  // +1 is for linear probing. This changes in quadratic prob, and double hashing
            if (modified_key == key) {
                break;
            }
        }
        return is_present;
    }

    void disp() {
        for (int i{}; i < bucket; i++) {
            cout << table[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    open_addressing oa(7);
    oa.insert(49);
    oa.insert(56);
    oa.insert(72);

    oa.disp();

    if (oa.search(56) == true) {
        cout << "yes\n";
    } else {
        cout << "no\n";
    }

    cout << "DELETE 56: " << oa.del(56) << endl;
    oa.disp();
    if (oa.search(56) == true) {
        cout << "yes\n";
    } else {
        cout << "no\n";
    }

    cout << endl;
    return 0;
}
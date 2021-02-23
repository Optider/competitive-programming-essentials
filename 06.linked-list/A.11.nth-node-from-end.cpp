/*  
    Problem: finding the n-th node from the end of a given linked list.

    Test Cases:

        i/p:    10 20 30 40 50
                2
        o/p:    40

        i/p:    10 20
                3
        o/p:    

        i/p:    10 20 30
                3
        o/p:    10

*/

#include <bits/stdc++.h>
using namespace std;

// T:
// S:
// void solve() {}

struct Node {
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

void nthFromTailBetter(Node *head, int n) {
    Node *slow = head, *fast = head;

    for (int times = 0; times < n; times++) {
        if (fast == nullptr) {
            cout << "null/invalid n" << endl;
            return;
        }
        fast = fast->next;
    }

    while (fast != nullptr) {
        slow = slow->next;
        fast = fast->next;
    }

    cout << slow->data << endl;
}

void nthFromTailNaive(Node *head, int n) {
    Node *cur = head;
    int count = {};

    while (cur != nullptr) {
        count++;
        cur = cur->next;
    }

    // no of times jump is needed => count-n
    cur = head;
    if (n > count) {
        cout << "null/invalid n" << endl;
        return;
    }

    for (int times = 0; times < (count - n); times++) {
        cur = cur->next;
    }

    cout << cur->data << endl;
}

int main() {
    Node *head = new Node(4);
    head->next = new Node(8);
    head->next->next = new Node(12);

    nthFromTailNaive(head, 1);
    nthFromTailNaive(head, 2);
    nthFromTailNaive(head, 3);
    nthFromTailNaive(head, 4);

    nthFromTailBetter(head, 1);
    nthFromTailBetter(head, 2);
    nthFromTailBetter(head, 3);
    nthFromTailBetter(head, 4);

    cout << endl;
    return 0;
}
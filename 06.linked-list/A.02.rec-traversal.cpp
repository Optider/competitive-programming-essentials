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

void recTraversal(Node *head) {
    if (head == nullptr)
        return;

    cout << head->data << " ";
    recTraversal(head->next);
}

int main() {
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(40);

    recTraversal(head);

    cout << endl;
    return 0;
}
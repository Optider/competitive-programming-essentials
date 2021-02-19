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

// T: O(1)
// S: O(1)
Node *insertBegin(Node *head, int key) {
    Node *newNode = new Node(key);

    newNode->next = head;
    return newNode;
}

void printList(Node *head) {
    Node *cur = head;

    while (cur != nullptr) {
        cout << cur->data << " ";
        cur = cur->next;
    }
}

int main() {
    Node *head = nullptr;

    head = insertBegin(head, 4);
    head = insertBegin(head, 8);
    head = insertBegin(head, 12);
    head = insertBegin(head, 16);

    printList(head);
    cout << endl;
    return 0;
}
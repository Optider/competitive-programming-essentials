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

    if (head == nullptr)
        return newNode;

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
    Node *head = new Node(10);
    head->next = new Node(20);
    head->next->next = new Node(40);

    head = insertBegin(head, 4);

    printList(head);
    cout << endl;
    return 0;
}
#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
};

// T: O(n)
// S: O(1)
Node *insertEnd(Node *head, int key) {
    Node *newNode = new Node(key);
    if (head == nullptr)
        return newNode;

    Node *cur = head;
    while (cur->next != nullptr) {
        cur = cur->next;
    }

    cur->next = newNode;
    return head;
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

    head = insertEnd(head, 4);
    head = insertEnd(head, 8);
    head = insertEnd(head, 12);
    head = insertEnd(head, 16);

    printList(head);
    cout << endl;
    return 0;
}
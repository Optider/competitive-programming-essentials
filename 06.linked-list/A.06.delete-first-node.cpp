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

// T: O(1)
// S: O(1)
Node *deleteFirst(Node *head) {
    if (head == nullptr)
        return nullptr;

    Node *toDelete = head;
    head = head->next;

    delete toDelete;

    return head;
}

void printList(Node *head) {
    Node *cur = head;

    while (cur != nullptr) {
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;
}

int main() {
    Node *head = new Node(4);
    head->next = new Node(8);
    head->next->next = new Node(12);
    head->next->next->next = new Node(16);

    head = deleteFirst(head);
    printList(head);

    head = deleteFirst(head);
    printList(head);

    head = deleteFirst(head);
    printList(head);

    head = deleteFirst(head);
    printList(head);

    head = deleteFirst(head);
    printList(head);

    cout << endl;
    return 0;
}
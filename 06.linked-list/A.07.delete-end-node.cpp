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
Node *deleteTail(Node *head) {
    if (head == nullptr)
        return nullptr;

    // single node
    if (head->next == nullptr) {
        delete head;
        return nullptr;
    }

    Node *cur = head;

    while (cur->next->next != nullptr)
        cur = cur->next;

    delete cur->next;
    cur->next = nullptr;

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

    head = deleteTail(head);
    printList(head);

    head = deleteTail(head);
    printList(head);

    head = deleteTail(head);
    printList(head);

    head = deleteTail(head);
    printList(head);

    head = deleteTail(head);
    printList(head);

    cout << endl;
    return 0;
}
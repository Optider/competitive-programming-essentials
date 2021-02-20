/*  
    Problem: insertion in a sorted linked list. The linked list should remain sorted after insertion.

    Test Cases:

        i/p:
            10 30 40 50
            data = 20
        o/p:
            10 20 30 40 50

        i/p:
            10 20 30 40 50
            data = 6
        o/p:
            6 10 20 30 40 50

        i/p:
            10 20 30 40 50 60
            data = 80
        o/p:
            10 20 30 40 50 60 80

        i/p:
            NULL
            data = 10
        o/p:
            10

*/

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

// T: O()
// S: O()
Node *sortedInsert(Node *head, int key) {
    Node *newNode = new Node(key);

    if (head == nullptr or key < head->data) {
        newNode->next = head;
        return newNode;
    }

    Node *cur = head;
    while (cur->next != nullptr and cur->next->data <= key) {
        cur = cur->next;
    }

    newNode->next = cur->next;
    cur->next = newNode;
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
    Node *head = nullptr;

    head = sortedInsert(head, 40);
    printList(head);

    head = sortedInsert(head, 20);
    printList(head);

    head = sortedInsert(head, 10);
    printList(head);

    head = sortedInsert(head, 30);
    printList(head);

    head = sortedInsert(head, 6);
    printList(head);

    head = sortedInsert(head, 50);
    printList(head);

    head = sortedInsert(head, 80);
    printList(head);

    cout << endl;
    return 0;
}
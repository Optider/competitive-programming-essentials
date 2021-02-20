/*  
    Problem: Given a ..., we need to print ...

    Test Cases:

        i/p:
            10 30 40 50
            pos = 1
            data = 6
        o/p:
            6 10 30 40 50

        i/p:
            6 10 30 40 50
            pos = 2
            data = 20
        o/p:
            6 20 10 30 40 50

        i/p:
            6 20 10 30 40 50
            pos = 7
            data = 60
        o/p:
            6 20 10 30 40 50 60

        i/p:
            6 20 10 30 40 60 50
            pos = 10
            data = 100
        o/p:
            6 20 10 30 40 60 50

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

// T: O(n)
// S: O(1)
Node *insertAtPos(Node *head, int pos, int key) {
    Node *newNode = new Node(key);
    if (pos == 1) {
        newNode->next = head;
        return newNode;
    }

    if (pos == 2) {
        newNode->next = head->next;
        head->next = newNode;
        return head;
    }

    Node *cur = head;
    for (int jumps = 0; jumps < (pos - 2); jumps++) {
        if (cur->next == nullptr)
            return head;
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
    Node *head = new Node(10);
    head->next = new Node(30);
    head->next->next = new Node(40);
    head->next->next->next = new Node(50);

    head = insertAtPos(head, 1, 6);
    printList(head);

    head = insertAtPos(head, 2, 20);
    printList(head);

    head = insertAtPos(head, 7, 60);
    printList(head);

    head = insertAtPos(head, 10, 20);
    printList(head);

    cout << endl;
    return 0;
}
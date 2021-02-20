/*  
    Problem: Given a ..., we need to print ...

    Test Cases:

        i/p:
            10 30 40 50
            pos = 2
            data = 20
        o/p:
            10 20 30 40 50

        i/p:
            10 20 30 40 50
            pos = 6
            data = 60
        o/p:
            10 20 30 40 50 60

        i/p:
            10 20 30 40 50 60
            pos = 8
            data = 80
        o/p:
            10 20 30 40 50 60

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

    insertAtPos(head, 2, 20);

    printList(head);

    insertAtPos(head, 6, 60);
    printList(head);

    insertAtPos(head, 8, 80);
    printList(head);

    cout << endl;
    return 0;
}
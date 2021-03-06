/*  
    Problem: find the middle of a linked list of a given linked list.

    Test Cases:

        i/p:
            10 30 40 50
        o/p:
            40

        i/p:
            10 20 30 40 50
        o/p:
            30

        i/p:
            NULL
        o/p:
            NULL

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

// T: O(n) 1 traversal
// S: O(1)
Node *midElemBetter(Node *head) {
    Node *slow = head;
    Node *fast = head;

    while (fast != nullptr and fast->next != nullptr) {
        slow = slow->next;
        fast = fast->next->next;
    }

    return slow;
}

// T: O(n) 2 traversals
// S: O(1)
Node *midElemNaive(Node *head) {
    if (head == nullptr)
        return head;

    Node *cur = head;
    int count = {};
    for (cur = head; cur != nullptr; cur = cur->next) {
        count++;
    }

    cur = head;
    for (int jumps = 0; jumps < count / 2; jumps++) {
        cur = cur->next;
    }
    return cur;
}

void printNode(Node *midNode) {
    if (midNode == nullptr)
        cout << "null" << endl;
    else
        cout << midNode->data << endl;
}

int main() {
    Node *head = nullptr;
    Node *midNode = nullptr;

    midNode = midElemBetter(head);
    printNode(midNode);

    midNode = midElemNaive(head);
    printNode(midNode);

    head = new Node(4);
    head->next = new Node(8);
    head->next->next = new Node(12);

    midNode = midElemBetter(head);
    printNode(midNode);

    midNode = midElemNaive(head);
    printNode(midNode);

    head->next->next->next = new Node(16);

    midNode = midElemBetter(head);
    printNode(midNode);

    midNode = midElemNaive(head);
    printNode(midNode);

    cout << endl;
    return 0;
}
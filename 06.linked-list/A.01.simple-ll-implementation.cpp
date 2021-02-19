#include <bits/stdc++.h>
using namespace std;

struct Node {
    int data;
    Node *next;
    Node(int val) {
        data = val;
        next = nullptr;
    }
};

void printList(Node *head) {
    Node *cur = head;
    while (cur) {
        cout << cur->data << " ";
        cur = cur->next;
    }
    cout << endl;
}

int main() {
    Node *head = new Node(6);
    Node *temp = new Node(12);
    Node *temp2 = new Node(18);

    head->next = temp;
    temp->next = temp2;

    // Short Implementation
    Node *head2 = new Node(4);
    head2->next = new Node(8);
    head2->next->next = new Node(12);

    // Traversal
    printList(head);
    printList(head2);
    return 0;
}
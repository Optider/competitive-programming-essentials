/*  
    Problem: Finding position of an element in a linked list (iteratative and recursive solutions).


    Test Cases:

        i/p: elems: 10 5 20 15
             key:   20
        o/p: 3

        i/p: elems: 10 5 20 15
             key:   40
        o/p: -1

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
// S: O(n)
int searchRec(Node *head, int key) {
    if (head == nullptr)
        return -1;
    if (head->data == key)
        return 1;

    int pos = searchRec(head->next, key);
    if (pos == -1)
        return -1;
    return pos + 1;
}

int searchIter(Node *head, int key) {
    Node *cur = head;
    int pos = 1;

    while (cur != nullptr) {
        if (cur->data == key)
            return pos;
        pos++;
        cur = cur->next;
    }

    return -1;
}

int main() {
    Node *head = new Node(4);
    head->next = new Node(8);
    head->next->next = new Node(12);

    cout << searchRec(head, 20) << endl;
    cout << searchRec(head, 12) << endl;
    cout << searchRec(head, 8) << endl;
    cout << searchRec(head, 4) << endl;

    cout << endl;

    cout << searchIter(head, 20) << endl;
    cout << searchIter(head, 12) << endl;
    cout << searchIter(head, 8) << endl;
    cout << searchIter(head, 4) << endl;

    cout << endl;
    return 0;
}
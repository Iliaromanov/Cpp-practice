#include <iostream>
using namespace std;

// Defining a singly linked list of ints
struct Node {
    int val;
    Node *next;
};

void addNode(Node *head, int new_val);
void deleteLlist(Node *head);

int main() {
    cout << "1" << endl;
    Node head = {0, nullptr};
    Node *headPtr = &head;
    cout << "1" << endl;
    for (int i = 1; i < 5; ++i) {
        addNode(headPtr, i);
        cout << "~~~~~~~~~~~~~~" << endl;
    }

    deleteLlist(headPtr);
}

void addNode(Node *head, int new_val) {
    // Adds node to end of llist
    Node *tmp = head;
    while (tmp->next) {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }

    Node *new_node = new Node{new_val, nullptr};

    tmp->next = new_node;
}

void deleteLlist(Node *head) {
    Node *tmp = head;
    Node *trash = nullptr;
    while (tmp) {
        trash = tmp;
        tmp = tmp->next;
        delete trash;
    }
}
#ifndef _NODE_H_
#define _NODE_H_

struct Node {
    int data;
    Node *next = nullptr;
    // MIL for implicit conversion of int to Node. Must add 'explicit' keyword to disable implicit conversions 
    Node(int data): data{data}, next{nullptr} {}
    Node(int data, Node *next): data{data}, next{next} {}
    // Copy constructor that performs deep copy on nodes
    Node(const Node &n): data{n.data},
                         next{n.next ? new Node{*n.next} : nullptr} {}
};
#endif
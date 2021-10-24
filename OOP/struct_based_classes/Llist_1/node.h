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
    // Copy assignment operator
    Node &operator=(const Node &other) {
        if (this == &other) return *this; // check for self assignment
        Node * tmp = other.next? new Node{ *other.next } : nullptr; // deep copy to tmp, terminates here if not enough heap memory
        data = other.data;
        delete next; // free the current contents of this
        next = tmp; // deep copy of the new contents
        return *this; // return modified lhs object
    }
    // Could alternatively do:
    /*
    void swap( Node & other ) {
      std::swap( data, other.data );
      std::swap( next, other.next );
   }
    Node & operator=( const Node & other) {
        Node tmp{ other };
        swap( tmp );
        return *this;
    }
    */


    // Destructor:
    // invoked whenever delete is called on a Node pointer
    // thus its recursive since it uses delete
    // this allows deallocation of all memory in a Llist by just freeing the root node
    ~Node() {delete next;}
};
#endif
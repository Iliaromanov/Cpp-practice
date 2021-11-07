#include <string>

template <typename T> class List { // this should go in a .h file
    struct Node {
      T data;
      Node *next;
     //. . .
    };
    Node *theList;
  public:
    //. . .
};


int main() {
    List<int> li; // can use template create instance for specific type
    li.addToFront(1);


    List<string> ls;
    ls.addToFront("hello")
}
#include <iostream>
using namespace std;


void inc(int &n);

int main() {
    int x = 5; // x is a lvalue
    int &y = x; // y is an alias for x; y is an lvalue reference bound to the lvalue x
    y += 2;
    int *p = &y;
    *p += 3;
    cout << x << endl; // > 10

    inc(y);
    cout << x << endl; // > 11
}

void inc(int &n) { // pass by reference
    n += 1; // notice how n does NOT need to be dereferenced
}
#include <iostream>
#include <iomanip>
using namespace std;

bool even(unsigned int n);
bool odd(unsigned int n);
string greet(string s = "there"); // default
int add1(int n);
int add1(int n, int m);
char add1(char c);

int main() {
    cout << boolalpha << even(3) << " " << odd(3) << endl;
    cout << greet() << endl;
    cout << greet("Ilia") << endl;
    cout << add1(1) << " " << add1(1, 1) << " " << add1('a') << endl;
}

bool even(unsigned int n) {
    // returns true if n is even
    if (n == 0) return true;
    return odd(n - 1);
}

bool odd(unsigned int n) {
    //returns true if n is odd
    if (n == 0) return false;
    return even(n - 1);
}

string greet(string name) {
    return "Hello " + name + "!";
}

// overloading
int add1(int n) {
    return n += 1;
}

int add1(int n, int m) {
    return n + m;
}

char add1(char c) {
    return c += 1;
}

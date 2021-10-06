#include <iostream>
using namespace std;

struct Vec {
    int x, y;
};

Vec operator+(const Vec &v1, const Vec &v2) { // overloading + operator
    Vec v{v1.x + v2.x, v1.y + v2.y};
    return v;
}

ostream &operator<<(ostream &out, const Vec &v) { // overloading << operator
    out << '{' << v.x << ',' << v.y << '}' << endl;
    return out;
}

int main() {
    Vec v1{3, 4}, v2{5, 6};
    Vec v3 = v1 + v2;

    cout << v3 << endl; // > {8,10}
}


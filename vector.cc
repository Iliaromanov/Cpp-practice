#include <iostream>
#include <vector>
using namespace std;

struct Point {
    int x, y;
    Point(int x, int y) : x{x}, y{y} {}
};


int main() {
    vector<Point> v;
    v.emplace_back(6, 5);
    v.push_back(Point{4, 3});

    for (auto p : v) {
        cout << p.x << ", " << p.y << endl;
    }
}

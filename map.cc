#include <iostream>
#include <map>
#include <string>
using namespace std;

struct Vec {
    int x, y, z;
    Vec() : x{0}, y{0}, z{0} {}
    Vec(int x, int y, int z) : x{x}, y{y}, z{z} {}
};


int main() {
    map<string, Vec> m; // map with chars as keys and Vecs as values
    m["a1"] = Vec{1, 2, 3};
    m["a2"] = Vec{-1, -2, -3};
    for (auto &pair : m) {
        cout << pair.first << ": " << pair.second.x << "," << pair.second.y << "," << pair.second.z << endl;
    }
    cout << "~~~~~~" << endl;

    m.erase("a1");
    for (auto &pair : m) {
        cout << pair.first << ": " << pair.second.x << "," << pair.second.y << "," << pair.second.z << endl;
    }
    cout << "a1: " << m.count("a1") << " a2: " << m.count("a2") << endl;
}
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


void addOne(int &n) {++n;}

void print(int n) {
    cout << n << " ";
}

int main() {
    vector<int> v {1, 2, 3, 4, 5};
    for_each(v.begin(), v.end(), addOne); // calls addOne for each element in the vector 
    for_each(v.begin(), v.end(), print); // > 2 3 4 5 6
}
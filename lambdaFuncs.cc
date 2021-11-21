#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int nums[] = {1, 2, 3, 4, 5};
    for_each(nums, nums+5, [](int n) { cout << n << ", ";} );
}
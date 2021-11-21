#include <iostream>
#include <vector>
using namespace std;

template<typename T> void print(T x, bool newline=true) {
    cout << x;
    if (newline) {
        cout << endl;
    } else {
        cout << " ";
    }
}

template<typename T> void printVec(vector<T> vec, char sep=',') {
    for (auto val : vec) {
        cout << val << sep;
    }
    cout << endl;
} 

int main() {
    vector<int> nums = {1, 2, 3, 4, 5};
    char chars[] = {'a', 'b', 'c', 'd'};
    vector<string> words = {"abc", "123", "buster", "baxter"};

    for (int i = 0; i < 4; ++i) print(chars[i]);

    printVec(nums);
    printVec(words);

}

/* Output:
a
b
c
d
1,2,3,4,5,
abc,123,buster,baxter,
*/
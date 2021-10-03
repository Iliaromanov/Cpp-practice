#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i;
    while (true) {
        cin >> i;
        if (cin.fail()) break;
        sum += i;
        cout << "Added: " << i << endl;
        cout << "Current Sum: " << sum << endl;
    }
    cout << "Final Sum: " << sum << endl;
    cout << "Program finished" << endl;
}
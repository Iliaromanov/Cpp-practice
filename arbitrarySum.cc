#include <iostream>
using namespace std;

int main() {
    int sum = 0;
    int i;
    while (true) {
        if (!(cin >> i)) {
            if (cin.eof()) break;

            // If its not an eof, then clear error and ignore the non-int input
            cin.clear();
            cin.ignore();
        } else {
            sum += i;
            cout << "Added: " << i << endl;
            cout << "Current Sum: " << sum << endl;
        };
        
    }
    cout << "Final Sum: ";
    cout << sum << endl;
    cout << "Program finished" << endl;
}
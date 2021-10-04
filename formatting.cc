#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    for(int i=0; i < 20; ++i) {
        cout << dec << setw(3) << i << oct << setw(3) << i << hex << setw(3) << i << endl;
    }
}

// Out:
// 0  0  0
// 1  1  1
// 2  2  2
// 3  3  3
// 4  4  4
// 5  5  5
// 6  6  6
// 7  7  7
// 8 10  8
// 9 11  9
//10 12  a
//11 13  b
//12 14  c
//13 15  d
//14 16  e
//15 17  f
//16 20 10
//17 21 11
//18 22 12
//19 23 13
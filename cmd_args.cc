// Working with command line arguments
#include <iostream>
using std::cout;
using std::endl;

int main(int argc, char ** argv) {
    cout << argc << endl;
    for (int argi = 0; argi < argc; ++argi) {
        cout << argv[argi] << endl;
    }
}



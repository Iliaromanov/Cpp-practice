// Program that reads ints from input.txt
//  and writes them +1 to output.txt
#include <fstream>

int main() {
    std::ifstream infile{ "input.txt" };
    std::ofstream outfile{ "output.txt" };
    int i;
    while (true) {
        infile >> i;
        if (infile.fail()) break;
        outfile << i + 1 << std::endl;
    }
}

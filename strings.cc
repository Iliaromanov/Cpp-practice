#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <sstream>
using namespace std;

int main() {
    // Reading a string and outputting it
    string name;
    cout << "Type your name: ";
    cin >> name;
    cout << "Hello " + name << endl;

    // reading lines from file
    int i = 1;
    string s;
    ifstream text{ "sampleText.txt" };
    while (getline(text, s)) {
        cout << setw(3) << i++ << ": \"" << s << '\"' << endl;
    }

    // passing string as input stream
    string token;
    string sentence1{ "The quick brown fox\njumped over the lazy\t dog." };
    istringstream ss{ sentence1 };
    while (ss >> token) { // splitting tokens based on white space
        cout << token << endl;
    }

    cout << "~~~~~~~~~~~" << endl;

    string sentence2{ "The,quick,brown,fox,jumped" };
    istringstream ss2{ sentence2 };
    while (getline(ss2, token, ',')) { // splitting on comma
        cout << token << endl;
    }



}


/* Reading lines out:
  1: "Why do we use it?"
  2: "    It is a long established fact that a reader will be distracted by the readable content of"
  3: "    a page when looking at its layout. The point of using Lorem Ipsum is that it has a more-or-less"   
  4: "    normal distribution of letters, as opposed to using "Content here, content here","
  5: "    making it look like readable English. Many desktop publishing packages and web page editors now "  
  6: "    use Lorem Ipsum as their default model text, and a search for 'lorem ipsum' will uncover many web" 
  7: "    sites still in their infancy. Various versions have evolved over the years, sometimes by accident,"
  8: "    sometimes on purpose (injected humour and the like)."
  9: "Ok done"
*/
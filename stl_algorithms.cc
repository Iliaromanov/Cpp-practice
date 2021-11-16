#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
using namespace std;


void addOne(int &n) {++n;}
int sub1(int n) {return n - 1;}
void print(int n) {cout << n << " ";}

int main() {
    // for_each (InputIterator first, InputIterator last, Function fn)
    vector<int> v {1, 2, 3, 4, 5};
    for_each(v.begin(), v.end(), addOne); // calls addOne for each element in the vector 
    for_each(v.begin(), v.end(), print); // 2 3 4 5 6

    // find (InputIterator first, InputIterator last, const T& val)
    string words[] = {"hello", "goodbye", "bye", "Hi", "bye"};
    string *p = find(words, words+5, "bye"); // p points to words[3]
    cout << endl << *p << endl; // bye

    // count (InputIterator first, InputIterator last, const T& val)
    char letters[] = {'a', 'a', 'b', 'c', 'a', 'd'};
    int count_a = count(letters, letters+6, 'a');
    cout << count_a << endl; // 3

    // copy (InputIterator first, InputIterator last, OutputIterator result)
    vector<int> w; // or could do w(5) to not have to use back_inserter
    copy(v.begin(), v.end(), back_inserter(w)); // copies contents of v to w
    for_each(w.begin(), w.end(), print); // 2 3 4 5 6
}
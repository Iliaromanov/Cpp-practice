#include <iostream>
using namespace std;

class E1 {};
class E2: public E1 {};

int main() {
  try {
    cout << "First block: ";
    throw E2{};
  } catch (E2) {
    // This block will run because E2 will be caught here.
    cout << "caught on E2 block" << endl;
  } catch (E1) {
    // This block will not run because the exception was already caught in the previous block.
    // However, it would run if the exception raised was of type E1.
    cout << "caught on E1 block" << endl;
  }

  try {
    cout << "Second block: ";
    throw E2{};
  } catch (E1) {
    // This block will run because E2 will be caught here.
     cout << "caught on E1 block" << endl;
  } catch (E2) {
    // This block will never run. Any exception of types E1 or E2 will be handled by the block above.
     cout << "caught on E2 block" << endl;
  }
}
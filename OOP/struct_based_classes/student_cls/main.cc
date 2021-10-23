// client
#include "student.h"
#include <iostream>

int main() {
    Student s{90, 95, 88}; // create Student object. {...} is called the initialization list
    std::cout << s.grade() << std::endl; // call the grade method on object s
}
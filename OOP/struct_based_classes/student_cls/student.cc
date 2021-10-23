//implementation
#include "student.h"

float Student::grade() { // :: is the scope resolution operator
    return assignments * 0.5 + mt * 0.2 + final * 0.3;
}

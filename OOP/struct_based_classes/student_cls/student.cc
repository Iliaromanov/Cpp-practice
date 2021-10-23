//implementation
#include "student.h"

float Student::grade() { // :: is the scope resolution operator
    return this->assignments * 0.5 + this->mt * 0.2 + this->final * 0.3;
}

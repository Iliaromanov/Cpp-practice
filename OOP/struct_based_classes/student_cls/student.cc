//implementation
#include "student.h"

int capGrade( int grade ) {
    if (grade < 0) return 0;
    if (grade > 100 ) return 100;
    return grade;
}

Student::Student( const int id, int assignments, int mt, int final ) 
   : id{id}, assignments{capGrade(assignments)}, mt{capGrade(mt)}, final{capGrade(final)} {

    
    // initializing without const int id
    // must use 'this' keyword here since param names are the same as classes data field names. 
    // (similar to Python __init__ constructor method)
    // this->assignments = capGrade( assignments );
    // this->mt = capGrade( mt );
    // this->final = capGrade( final );
}

Student::Student(const Student &other)
    : assignments{other.assignments}, mt{other.mt}, final{other.final} {} // copy constructor

float Student::grade() { // :: is the scope resolution operator
    // 'this' is automatically added by the compiler if its not mentioned explicitly
    // some ppl feel very strongly about whether to use this when it is unneeded or not
    // I'm gonna stick to using it only when absolutely necessary cus thats what waterloo wants
    return this->assignments * 0.5 + this->mt * 0.2 + this->final * 0.3;
}

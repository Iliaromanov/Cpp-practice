// interface
#ifndef _STUDENT_H_
#define _STUDENT_H_

struct Student {
    int assignments, mt, final;

    Student(int assignments = 0, int mt = 0, int final = 0); // constructor
    // Note: default parameter values only go in the interface and NOT the implementation
    float grade(); // method
};

#endif
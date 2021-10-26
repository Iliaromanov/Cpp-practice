// interface
#ifndef _STUDENT_H_
#define _STUDENT_H_

struct Student {
    static int numStudents; // counts total number of students
    const int id; // has to be initialized using MIL
    int assignments, mt, final;

    Student(const int id, int assignments = 0, int mt = 0, int final = 0); // constructor
    Student(const Student &other); // copy constructor
    // Note: default parameter values only go in the interface and NOT the implementation
    float grade(); // method
};

#endif
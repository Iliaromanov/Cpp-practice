#ifndef _STUDENT_H_
#define _STUDENT_H_

struct Student {
    int assignments, mt, final;

    Student(int assignments, int mt, int final); // constructor
    float grade(); // method
};

#endif
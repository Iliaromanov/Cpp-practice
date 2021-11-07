#include <iostream>
using namespace std;

class InvalidGrade { // class for invalid grade exceptions
    int grade;
    public:
        InvalidGrade(int grade) : grade{grade} {}
        int getGrade() const {return grade;}
};

// Helper function
int checkGrade( int grade ) {
  if ( grade >= 0 && grade <= 100 ) {
    return grade;
  } else {
    throw InvalidGrade{grade};
  }
}

class Student {
  private:
    const int id;
    int assns, mt, final;
  public:
    Student( const int id, int assns = 0, int mt = 0, int final = 0 )
      : id{id}, assns{checkGrade(assns)}, mt{checkGrade(mt)}, final{checkGrade(final)} {}
    float grade() const {
      return assns * 0.4 + mt * 0.2 + final * 0.4;
    }
};

// In main.cc
int main () {
  try {
    Student s{ 7899, -10, 50, 150 };
    cout << "s.grade() = " << s.grade() << endl;
  } catch(InvalidGrade ex) {
      cout << "Invalid Grade: " << ex.getGrade() << endl;
  }
}
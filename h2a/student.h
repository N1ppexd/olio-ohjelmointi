#ifndef STUDENT_H
#define STUDENT_H

#include <iostream>
using namespace std;

class Student
{
private:
    string studentName;
    int studentNumber;
    double averageGrade;
    
public:

    void setName(const string &name);
    void setNumber(int number);
    void setAverage(double average);

    string getName() const;
    int getNumber() const;
    double getAverage() const;

    Student();
};

#endif // STUDENT_H

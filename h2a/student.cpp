#include "student.h"


void Student::setName(const string &name){
    studentName = name;
}
void Student::setNumber(int number){
    studentNumber = number;
}
void Student::setAverage(double average){
    averageGrade = average;
}

string Student::getName() const { return studentName; }
int Student::getNumber() const { return studentNumber; }
double Student::getAverage() const { return averageGrade; }

Student::Student() {}

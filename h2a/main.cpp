#include <iostream>
#include <memory>
#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    Car car;
    car.setBrand("joku Brand");
    car.setModel("joku Model");
    car.setYearModel(2000);
    car.printData();

    Rectangle *rectangle = new Rectangle(5,4);
    
    cout << "rectangle area = " << rectangle->getArea()<< endl;
    cout << "rectangle perimeter = " << rectangle->getCircum()<< endl;

    delete rectangle;
    rectangle = nullptr;

    unique_ptr<Student> student = make_unique<Student>();
    student->setName("Pertti");
    student->setNumber(69);
    student->setAverage(9.33f);

    cout << student->getName() << " has a number of " << student->getNumber()
         << " and a average grade of " << student->getAverage() << endl;


    return 0;
}

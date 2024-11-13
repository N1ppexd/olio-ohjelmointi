#include "car.h"

void Car::printData() const{
    cout << "brand = " << brand << endl;
    cout << "model = " << model << endl;
    cout << "year model = " << yearModel << endl;
}

void Car::setBrand(const string &brand){
    this->brand = brand;
}
void Car::setModel(const string &model){
    this->model = model;
}
void Car::setYearModel(int yearModel){
    this->yearModel = yearModel;
}

Car::Car()
{

}

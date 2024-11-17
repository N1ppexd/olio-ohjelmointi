#include "car.h"

Car::Car(string brand, string model, int yearModel){
    this->brand = brand;
    this->model = model;
    this->yearModel = yearModel;
}

void Car::printData(){
    cout << "Car brand : " << brand << endl;
    cout << "Car model : " << model << endl;
    cout << "Car year model : " << yearModel << endl;
}

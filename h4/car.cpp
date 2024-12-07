#include "car.h"

Car::Car() {}

Car::Car(const string& model, const string& brand){
    setBrand(brand);
    setModel(model);
}

void Car::setWheels(){
    objWheels.clear();
    int wheelSize = 17;
    string wheelTYpe = "kesarengas";

    for(int i = 0; i < maxWheelAmount; i++){
        objWheels.push_back(Wheel(wheelSize, wheelTYpe));
    }
}

void Car::setEngine(){
    int engineHorsePower = 150;
    double engineDisplacement = 2.0;

    objEngine = Engine(engineHorsePower, engineDisplacement);
}

string Car::getModel() const { return this->model; }
string Car::getBrand() const { return this->brand; }
void Car::setBrand(const string& brand) { this-> brand = brand; }
void Car::setModel(const string& model) {this-> model = model; }

void Car::printDetails() const{

    cout << "Car " << getModel() << ", " << getBrand() << endl;
    cout << "Engine " << objEngine.getHorsePower() << " hp " << objEngine.getDisplacement() << " L " << endl;
    for(int i = 0; i < objWheels.size(); i++){
        cout << "wheel " << i << "1:" << objWheels[i].getSize() << ", " << objWheels[i].getType() << endl;
    }
}
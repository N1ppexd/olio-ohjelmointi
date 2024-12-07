#ifndef CAR_H
#define CAR_H

#include "engine.h"
#include "wheel.h"

#include <vector>

class Car
{
private:
    const int maxWheelAmount = 4;
    Engine objEngine;
    vector<Wheel> objWheels;
    string model, brand;
public:
    Car();
    Car(const string& model, const string& brand);
    void setWheels();
    void setEngine();
    string getModel() const;
    string getBrand() const;
    void setModel(const string& model);
    void setBrand(const string& brand);

    void printDetails() const;
};

#endif // CAR_H

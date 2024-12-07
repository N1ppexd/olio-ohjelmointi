#include "car.h"

int main()
{
    Car car = Car("Corolla", "Toyota");
    car.setEngine();
    car.setWheels();
    car.printDetails();
    return 0;
}

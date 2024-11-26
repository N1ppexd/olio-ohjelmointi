#include "animal.h"

Animal::Animal() {}

void Animal::callOut(){
    cout << "Animal makes noise" << endl;
}

Animal::~Animal(){
    cout << "animal destructor" << endl;
}

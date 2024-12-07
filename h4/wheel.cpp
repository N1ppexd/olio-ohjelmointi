#include "wheel.h"

Wheel::Wheel() {}
Wheel::Wheel(int size, const string& type){
    setSize(size);
    setType(type);
}

int Wheel::getSize() const{
    return size;
}

string Wheel::getType() const{
    return type;
}

void Wheel::setSize(int size){
    this->size = size;
}

void Wheel::setType(const string& type){
    this->type = type;
}

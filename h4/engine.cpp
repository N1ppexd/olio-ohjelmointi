#include "engine.h"

Engine::Engine() {}

Engine::Engine(int horsePower, double displacement){
    setDisplacement(displacement);
    setHorsePower(horsePower);
}

double Engine::getDisplacement() const{
    return displacement;
}
int Engine::getHorsePower() const{
    return horsePower;
}

void Engine::setDisplacement(double displacement){
    this->displacement = displacement;
}
void Engine::setHorsePower(int horsePower){
    this->horsePower = horsePower;
}

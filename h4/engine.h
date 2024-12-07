#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
private:
    int horsePower;
    double displacement;
public:
    Engine();
    Engine(int, double);
    int getHorsePower() const;
    void setHorsePower(int);
    double getDisplacement() const;
    void setDisplacement(double);
};

#endif // ENGINE_H

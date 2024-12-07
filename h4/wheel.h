#ifndef WHEEL_H
#define WHEEL_H

#include <iostream>

using namespace std;

class Wheel
{
private:
    int size;
    string type;
public:
    Wheel();
    Wheel(int, const string &);
    int getSize() const;
    void setSize(int);
    string getType() const;
    void setType(const string& type);
};

#endif // WHEEL_H

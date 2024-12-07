#ifndef AGGRECATIONA_H
#define AGGRECATIONA_H

#include "classb.h"

class AggregationA
{
private:
    ClassB &refB;
public:
    AggregationA(ClassB&);
    string getBinfo();
    void setBinfo(string);
};

#endif // AGGRECATIONA_H

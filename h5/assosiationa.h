#ifndef ASSOSIATIONA_H
#define ASSOSIATIONA_H

#include "classb.h"

class AssosiationA
{
private:
    ClassB objectB;
public:
    AssosiationA(ClassB);
    string getBinfo() const;
    void setBinfo(const string&);
};

#endif // ASSOSIATIONA_H

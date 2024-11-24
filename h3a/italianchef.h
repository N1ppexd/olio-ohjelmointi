#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H

#include "chef.h"

class ItalianChef : public Chef
{
private:
    string chefTitle;
public:
    ItalianChef(const string& name);
    ~ItalianChef();
    string getName() const;
    void makePasta() const;
};

#endif // ITALIANCHEF_H

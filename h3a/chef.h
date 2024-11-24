#ifndef CHEF_H
#define CHEF_H

#include <iostream>

using namespace std;

class Chef
{
private:
    string chefTitle;
protected:
    string name;
    void makeFood(const string& chefTitle, const string& food) const;
public:
    ~Chef();
    Chef(const string& name);
    void makeSalad() const;
    void makeSoup() const;
};

#endif // CHEF_H

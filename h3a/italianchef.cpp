#include "italianchef.h"

ItalianChef::ItalianChef(const string& name) : Chef(name)
{
    chefTitle = "ItalianChef";
    cout << chefTitle << " " << name << " Constructor" << endl;
}

ItalianChef::~ItalianChef()
{
    cout << chefTitle << " " << name << " Destructor" << endl;;
}

void ItalianChef::makePasta() const{
    makeFood(chefTitle,"pasta");
}

string ItalianChef::getName() const{
    return name;
}

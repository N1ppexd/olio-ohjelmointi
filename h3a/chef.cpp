#include "chef.h"

Chef::Chef(const string& name) {
    chefTitle = "Chef";
    cout << chefTitle << " " << name << " Constructor" << endl;;
    this->name = name;
}
Chef::~Chef(){
    cout << chefTitle << " " << name << " Destructor" << endl;;
}

void Chef::makeFood(const string& chefTitle, const string& food) const{
    cout << chefTitle << " " << name << " makes a " << food << endl;
}

void Chef::makeSalad() const{
    makeFood(chefTitle, "salad");
}
void Chef::makeSoup() const{
    makeFood(chefTitle, "soup");
}

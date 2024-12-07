#include <iostream>
#include "assosiationa.h"
#include "aggrecationa.h"

using namespace std;

int main()
{
    int a = 5;
    int b = 10;
    cout << "\na:n arvo on " << a << " ja osoite on " << &a <<  endl;
    cout << "b:n arvo on " << b << " ja osoite on " << &b << endl;

    int * myPointer = &a;

    cout << "\nPointerin osoittama osoite on : " << myPointer << endl;
    cout << "Pointerin osoittaman muistipaikan arvo on : " << *myPointer << endl;

    myPointer = &b;

    cout << "\nPointerin osoittama osoite on : " << myPointer << endl;
    cout << "Pointerin osoittaman muistipaikan arvo on : " << *myPointer << endl;

    int& refA = a;

    cout << "\nrefA osoittaa osoitteeseen: " << &refA << endl;
    cout << "refA:n osoittaman muistipaikan arvo on " << refA << endl;

    //refA:ta ei voi muuttaa muuttamatta a:n arvoa
    cout << "\n*********************\n" << endl;

    ClassB objB;
    objB.setInfo("Olion B asettama info");

    AssosiationA objAss(objB);
    objAss.setBinfo("Olion objAss asettama info");

    cout<<"Assosiaatio esimerkki:"<<endl;
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAss: "<<objAss.getBinfo()<< "\n" << endl;

    cout<<"Aggregaatio esimerkki:"<<endl;
    ClassB &refB=objB;
    AggregationA objAggr(refB);
    objAggr.setBinfo("Olion Agr asettama info");
    cout<<"objB: "<<objB.getInfo()<<endl;
    cout<<"objAggr "<<objAggr.getBinfo()<<endl;
    cout<<endl;

    return 0;
}

#include "italianchef.h"

int main()
{
    ItalianChef anthony = ItalianChef("Anthony Bourdain");
    anthony.makeSalad();
    anthony.makeSoup();
    anthony.makePasta();

    cout << "The name of the Italian Chef is " << anthony.getName() << endl;

    return 0;
}

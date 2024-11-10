#include <iostream>
#include "calculations.h"

using namespace std;

int main()
{
    int a, b;
    cout << "Give number a" << endl;
    cin >> a;
    cout << "Give number b" << endl;
    cin >> b;

    calcSum(a,b);
    calcDiv(a,b);

    return 0;
}


void calcSum(int a, int b){
    int sum = retSum(a, b);
    cout << a << "*" << b << "=" << sum << endl;
}

void calcDiv(int a, int b){
    float sum = retDiv(a,b);
    cout << a << "/" << b << "=" << sum << endl;
}

int retSum(int a, int b){
    return a * b;
}

float retDiv(int a, int b){
    if(b == 0){ cout  << "cannot divide by 0" << endl; }
    return b == 0 ? 0 : (float)a / (float)b;
}

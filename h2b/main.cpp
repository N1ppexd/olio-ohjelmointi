#include "car.h"

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    vector<Car> carList;

    //en jaksa keksiä mittään ihmeen autoja
    Car car1 = Car("brand", "model", 2000);
    Car car2 = Car("brand2", "model2", 2001);
    Car car3 = Car("brand3", "model3", 2002);

    carList.push_back(car1);
    carList.push_back(car2);
    carList.push_back(car3);

    //tulostetaan listan toisen alkion tiedot
    carList[1].printData();

    //for homma
    for(int i = 0; i < (int)carList.size(); i++){
        carList[i].printData();
    }

    return 0;
}

// Задание No1:
// Есть набор машин с двумя характеристиками: вместимость по весу и вместимость по объему.
// Расставьте машины в наборе в порядке убывания (приоритет у первой характеристики).

#include <iostream>
#include <algorithm>
#include <vector>

#include "../includes/CargoCar.h"
#include "../includes/utils.h"

int main()
{
    std::vector<CargoCar> cars_set{CargoCar(2, 7), CargoCar(10, 5),CargoCar(5, 2),CargoCar(8, 10),CargoCar(3, 6),CargoCar(4, 2),CargoCar(4, 5)};

    std::cout<<"Before:\n";
    Print(cars_set);

    std::sort(cars_set.begin(), cars_set.end(), std::greater<CargoCar>());

    std::cout<<"After:\n";
    Print(cars_set);

    return 0;
}
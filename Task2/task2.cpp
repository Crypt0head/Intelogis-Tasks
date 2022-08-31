// Задание No2:
// Есть ОДИН набор с двумя разновидностями машин, у одних есть две характеристики: вместимость по
// весу и вместимость по объему, а у других только вместимость по весу (нет ограничения по объему).
// Есть груз с заданным весом и объемом.
// Удалите из набора те машины, в которые не влезет груз, используя в решении полиморфизм.

#include <vector>
#include <algorithm>

#include "../includes/CargoCar_Volumeless.h"
#include "../includes/Cargo.h"
#include "../includes/utils.h"

int main()
{
    double w, v;
    std::cout<<"Insert cargo's weight and volume:\n"; std::cin>>w>>v; 
    Cargo cargo(w, v);

    std::vector<CargoCar*> cars_set{new CargoCar(2, 7), new CargoCar(10, 5), new CargoCar_Volumeless(5), new CargoCar(8, 10), new CargoCar_Volumeless(3), new CargoCar_Volumeless(4), new CargoCar(4, 5)};

    std::cout<<"Avaliable cars:\n";
    Print_p(cars_set);

    cars_set.erase(remove_if(cars_set.begin(),cars_set.end(), [&cargo](CargoCar* obj){bool res; if(res = !obj->IsFit(cargo)) delete obj; return res;}), cars_set.end());

    std::cout<<"Cars that fits cargo profile:\n";
    Print_p(cars_set);

    return 0;
}
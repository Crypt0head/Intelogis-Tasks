// Задание No4:
// Есть набор целых чисел, набор машин (с двумя параметрами: вместимость по весу и объему), набор
// грузов (с двумя параметрами: вес и объем).
// Напишите ОДНУ шаблонную функцию увеличения всех чисел набора или всех параметров всех
// объектов набора на единицу.

#include <iostream>
#include <vector>
#include <list>

#include "../includes/CargoCar.h"
#include "../includes/Cargo.h"
#include "../includes/utils.h"

template<typename T>
void Increment(T& value_set)
{
    if(!value_set.empty()) 
    {
        for(auto it = value_set.begin();it!=value_set.end();++it)
        {
            *it+=1;
        }
    }
}

int main()
{
    auto print = [](const std::vector<int>& value_set)
    {
        for(auto i: value_set)
        {
            std::cout<<i<<" ";
        }
        
        std::cout<<"\n";

    };

    std::vector<CargoCar> cars_set{CargoCar(2, 7), CargoCar(10, 5),CargoCar(5, 2),CargoCar(8, 10),CargoCar(3, 6),CargoCar(4, 2),CargoCar(4, 5)};

    std::list<Cargo> cargos_set{Cargo(3, 4), Cargo(5, 7), Cargo(2, 4), Cargo(12, 8), Cargo(8, 6), Cargo(1, 3)};

    std::vector<int> vec{1, 2, 3, 4, 5, 6, 7, 8, 9};

    std::cout<<"Cars Set before:\n"; Print(cars_set);
    Increment(cars_set);
    std::cout<<"Cars Set after:\n"; Print(cars_set);

    std::cout<<"\nCargos Set before:\n"; Print(cargos_set);
    Increment(cargos_set);
    std::cout<<"Cargos Set after:\n"; Print(cargos_set);

    std::cout<<"\nVector<int> before:\n"; print(vec);
    Increment(vec);
    std::cout<<"Vector<int> after:\n"; print(vec);

    return 0;
}
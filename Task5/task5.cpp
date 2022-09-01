// Задание No5:
// Есть класс, определяющий машину (с двумя параметрами: вместимость по весу и объему) и класс,
// определяющий груз (с двумя параметрами: вес и объем), оба класса имеют метод print() для вывода
// значений атрибутов на консоль .
// Напишите ОДИН шаблонный класс, который расширял бы свойства объекта атрибутом «название» и
// добавлял бы в логику печати на консоль вывод этого названия. С помощью этого шаблонного класса
// надо создать объекты типа «машина с названием» и «груз с названием» и вывести их на печать.

#include <iostream>

#include "../includes/CargoCar.h"
#include "../includes/Cargo.h"
#include "../includes/utils.h"

template <typename T>
class NamedEntity : public T
{
protected:
    std::string name;

public:
    NamedEntity(std::string&& str, double w = -1., double v = -1.): T(w, v){name = str;};
    void print() const
    {
        std::cout<<name;
        T::print();
    }
};

int main()
{
    NamedEntity<CargoCar> NamedCargoCar("машина с названием", 1., 2.);

    NamedCargoCar.print();

    std::cout<<std::endl;

    NamedEntity<Cargo> NamedCargo("груз с названием", 1., 2.);

    NamedCargo.print();

    std::cout<<std::endl;


    return 0;
}
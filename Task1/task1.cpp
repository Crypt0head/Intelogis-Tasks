// Задание No1:
// Есть набор машин с двумя характеристиками: вместимость по весу и вместимость по объему.
// Расставьте машины в наборе в порядке убывания (приоритет у первой характеристики).

#include <iostream>
#include <algorithm>
#include <vector>

template<typename T>
void Print(const T& value_set)
{
    for(auto i: value_set)
    {
        i.Print();
    }
    
    std::cout<<"\n";
}

class CargoCar
{
private:
    double weight = 0.;
    double volume = 0.;

public:
    CargoCar(){}
    CargoCar(double w, double v) : weight(w), volume(v) {}

    bool operator>(const CargoCar& obj) const
    {
        if(weight > obj.weight)
        {
            return true;
        }
        else if(weight == obj.weight) 
        {
            if(volume > obj.volume)
            {
                return true;
            }
        }
        
        return false;
    }

    void Print() const {std::cout<<"CargoCar("<<weight<<","<<volume<<") ";}
    ~CargoCar(){}
};

int main()
{
    std::vector<CargoCar> vec{CargoCar(2, 7), CargoCar(10, 5),CargoCar(5, 2),CargoCar(8, 10),CargoCar(3, 6),CargoCar(4, 2),CargoCar(4, 5)};

    std::cout<<"Before:\n";
    Print(vec);

    std::sort(vec.begin(), vec.end(), std::greater<CargoCar>());

    std::cout<<"After:\n";
    Print(vec);

    return 0;
}
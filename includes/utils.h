#include <iostream>

template<typename T>
void Print(const T& value_set)
{
    for(auto i: value_set)
    {
        i.print();
    }
    
    std::cout<<"\n";
}

template<typename T>
void Print_p(const T& value_set)
{
    for(auto i: value_set)
    {
        i->print();
    }
    
    std::cout<<"\n";
}
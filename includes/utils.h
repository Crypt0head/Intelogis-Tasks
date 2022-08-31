#pragma once
#include <iostream>

template<typename T>
void Print(const T& value_set)
{
    for(auto i: value_set)
    {
        i.Print();
    }
    
    std::cout<<"\n";
}
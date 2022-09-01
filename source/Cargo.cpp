#include "../includes/Cargo.h"

double Cargo::GetWeight() const
{
    return weight;
}

double Cargo::GetVolume() const
{
    return volume;
}

Cargo& Cargo::operator=(const Cargo& obj)
{
    if(this!=&obj)
    {
        weight = obj.weight;
        volume = obj.volume;
    }

    return *this;
}

bool Cargo::operator>(const Cargo& obj) const
{
    if(this == &obj)
        return true;

    if(weight  > obj.weight)
    {
        return true;
    }
    else if(weight == obj.weight) 
    {
        if(volume  > obj.volume)
        {
            return true;
        }
    }
    
    return false;
}

bool Cargo::operator<(const Cargo& obj) const
{
    if(this == &obj)
        return true;

    if(weight < obj.weight)
    {
        return true;
    }
    else if(weight == obj.weight) 
    {
        if(volume < obj.volume)
        {
            return true;
        }
    }
    
    return false;
}

int Cargo::operator+=(int value)
{
    weight+=value;
    volume+=value;
    
    return 0;
}

void Cargo::print() const {std::cout<<"(W= "<<weight <<", V= "<<volume <<") ";}
#pragma once
#include <iostream>

class CargoCar
{
private:
    double weight_cap = 0.;
    double volume_cap = 0.;

public:
    CargoCar(){}
    CargoCar(double w, double v) : weight_cap(w), volume_cap(v) {}
    CargoCar(const CargoCar& obj) : weight_cap(obj.weight_cap), volume_cap(obj.volume_cap){}
    CargoCar& operator=(const CargoCar& obj)
    {
        if(this!=&obj)
        {
            weight_cap = obj.weight_cap;
            volume_cap = obj.volume_cap;
        }

        return *this;
    }

    bool operator>(const CargoCar& obj) const
    {
        if(this == &obj)
            return true;

        if(weight_cap  > obj.weight_cap)
        {
            return true;
        }
        else if(weight_cap  == obj.weight_cap ) 
        {
            if(volume_cap  > obj.volume_cap )
            {
                return true;
            }
        }
        
        return false;
    }

    bool operator<(const CargoCar& obj) const
    {
        if(this == &obj)
            return true;

        if(weight_cap < obj.weight_cap)
        {
            return true;
        }
        else if(weight_cap == obj.weight_cap) 
        {
            if(volume_cap < obj.volume_cap)
            {
                return true;
            }
        }
        
        return false;
    }

    void Print() const {std::cout<<"CargoCar("<<weight_cap <<","<<volume_cap <<") ";}
    ~CargoCar(){}
};
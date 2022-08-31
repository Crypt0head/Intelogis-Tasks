#pragma once
#include <iostream>
#include "../includes/Cargo.h"

class CargoCar
{
protected:
    double weight_cap = -1.;
    double volume_cap = -1.;

public:
    CargoCar(){}
    CargoCar(double w, double v) : weight_cap(w), volume_cap(v) {}
    CargoCar(const CargoCar& obj) : weight_cap(obj.weight_cap), volume_cap(obj.volume_cap){}
    virtual double GetWeightCap() const
    {
        return weight_cap;
    }
    virtual double GetVolumeCap() const
    {
        return volume_cap;
    }
    virtual CargoCar& operator=(const CargoCar& obj)
    {
        if(this!=&obj)
        {
            weight_cap = obj.weight_cap;
            volume_cap = obj.volume_cap;
        }

        return *this;
    }

    virtual bool operator>(const CargoCar& obj) const
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

    virtual bool operator<(const CargoCar& obj) const
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
    virtual bool IsFit(const Cargo& cargo) const
    {
        if((weight_cap>=cargo.GetWeight())&&(volume_cap>=cargo.GetVolume()))
        {
            return true;
        }

        return false;
    }
    virtual void Print() const {std::cout<<"CargoCar("<<weight_cap <<","<<volume_cap <<") ";}
    virtual ~CargoCar(){}
};
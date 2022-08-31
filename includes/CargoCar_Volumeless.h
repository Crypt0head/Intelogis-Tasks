#pragma once
#include "../includes/CargoCar.h"

class CargoCar_Volumeless: public CargoCar
{
public:
    CargoCar_Volumeless(){}
    CargoCar_Volumeless(double w)
    {
        weight_cap = w;
    }
    CargoCar_Volumeless(const CargoCar& obj)
    {
        weight_cap = obj.GetWeightCap();
    }
    CargoCar& operator=(const CargoCar& obj)
    {
        if(this!=&obj)
        {
            weight_cap = obj.GetWeightCap();
            volume_cap = obj.GetWeightCap();
        }

        return *this;
    }
    bool IsFit(const Cargo& cargo) const
    {
        if(weight_cap>=cargo.GetWeight())
        {
            return true;
        }

        return false;
    }
    void Print() const {std::cout<<"CargoCar("<<weight_cap<<") ";}
    ~CargoCar_Volumeless(){}
};
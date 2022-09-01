#include "../includes/CargoCar_Volumeless.h"
#include "../includes/Cargo.h"

CargoCar_Volumeless::CargoCar_Volumeless(double w)
{
    weight_cap = w;
}
CargoCar_Volumeless::CargoCar_Volumeless(const CargoCar& obj)
{
    weight_cap = obj.GetWeightCap();
}

CargoCar& CargoCar_Volumeless::operator=(const CargoCar& obj)
{
    if(this!=&obj)
    {
        weight_cap = obj.GetWeightCap();
        volume_cap = obj.GetWeightCap();
    }

    return *this;
}

bool CargoCar_Volumeless::IsFit(const Cargo& cargo) const
{
    if(weight_cap>=cargo.GetWeight())
    {
        return true;
    }

    return false;
}
void CargoCar_Volumeless::print() const {std::cout<<"(W= "<<weight_cap<<") ";}
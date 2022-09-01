#include "../includes/CargoCar.h"
#include "../includes/Cargo.h"

double CargoCar::GetWeightCap() const
{
    return weight_cap;
}
double CargoCar::GetVolumeCap() const
{
    return volume_cap;
}
CargoCar& CargoCar::operator=(const CargoCar& obj)
{
    if(this!=&obj)
    {
        weight_cap = obj.weight_cap;
        volume_cap = obj.volume_cap;
    }

    return *this;
}

bool CargoCar::operator>(const CargoCar& obj) const
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

bool CargoCar::operator<(const CargoCar& obj) const
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

int CargoCar::operator+=(int value)
{
    weight_cap+=value;
    volume_cap+=value;
    
    return 0;
}

bool CargoCar::IsFit(const Cargo& cargo) const
{
    if((weight_cap>=cargo.GetWeight())&&(volume_cap>=cargo.GetVolume()))
    {
        return true;
    }

    return false;
}
void CargoCar::print() const {std::cout<<"(W= "<<weight_cap <<", V= "<<volume_cap <<") ";}
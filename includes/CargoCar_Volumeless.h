#pragma once
#include "../includes/CargoCar.h"

class Cargo;

class CargoCar_Volumeless: public CargoCar
{
public:
    CargoCar_Volumeless(){}
    CargoCar_Volumeless(double w);
    CargoCar_Volumeless(const CargoCar& obj);
    CargoCar& operator=(const CargoCar& obj);
    bool IsFit(const Cargo& cargo) const;
    void print() const;
    ~CargoCar_Volumeless(){}
};
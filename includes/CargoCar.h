#pragma once
#include <iostream>

class Cargo;

class CargoCar
{
protected:
    double weight_cap = -1.;
    double volume_cap = -1.;

public:
    CargoCar(){}
    CargoCar(double w, double v) : weight_cap(w), volume_cap(v) {}
    CargoCar(const CargoCar& obj) : weight_cap(obj.weight_cap), volume_cap(obj.volume_cap){}
    virtual double GetWeightCap() const;
    virtual double GetVolumeCap() const;
    virtual CargoCar& operator=(const CargoCar& obj);
    virtual bool operator>(const CargoCar& obj) const;
    virtual bool operator<(const CargoCar& obj) const;
    virtual int operator+=(int value);
    virtual bool IsFit(const Cargo& cargo) const;
    virtual void print() const;
    virtual ~CargoCar(){}
};
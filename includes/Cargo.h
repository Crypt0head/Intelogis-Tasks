#pragma once
#include <iostream>

class Cargo
{
private:
    double weight = -1.;
    double volume = -1.;
public:
    Cargo(){}
    Cargo(double w, double v) : weight(w), volume(v) {}
    Cargo(const Cargo& obj) : weight(obj.weight), volume(obj.volume){}
    double GetWeight() const;
    double GetVolume() const;
    Cargo& operator=(const Cargo& obj);
    virtual bool operator>(const Cargo& obj) const;
    virtual bool operator<(const Cargo& obj) const;
    virtual int operator+=(int value);
    void print() const;
    ~Cargo(){}
};
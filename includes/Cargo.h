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
    double GetWeight() const
    {
        return weight;
    }
    double GetVolume() const
    {
        return volume;
    }
    Cargo& operator=(const Cargo& obj)
    {
        if(this!=&obj)
        {
            weight = obj.weight;
            volume = obj.volume;
        }

        return *this;
    }

    virtual bool operator>(const Cargo& obj) const
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

    virtual bool operator<(const Cargo& obj) const
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

    virtual int operator+=(int value)
    {
        weight+=value;
        volume+=value;
        
        return 0;
    }
    
    void Print() const {std::cout<<"Cargo("<<weight<<","<<volume<<") ";}
    ~Cargo(){}

};
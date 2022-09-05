#pragma once
#include <iostream>
#include <vector>
#include <map>
#include <string>

class Vertex;

using Routes = std::vector<std::pair<Vertex*, uint>>;
using Map = std::map<std::string,Vertex*>;

struct Vertex
{
    std::string name;
    bool mark = false;
    Routes routes;
    Vertex(std::string str) : name(str){}
    std::pair<bool, Vertex*> Find(Vertex* v);
};

class RoadGraph
{
private:
    std::string name;
    Map map;

public:
    RoadGraph(std::string&& str) : name(str){}
    void AddVetrtex(const std::string& name);
    void AddEdge(const std::string& from,const std::string& to, uint cost);
    const Map& GetMap() const;
    ~RoadGraph();
};
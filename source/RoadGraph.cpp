#include "../includes/RoadGraph.h"

std::pair<bool, Vertex*> Vertex::Find(Vertex* v)
{
    this->mark=true;

    std::pair<bool,Vertex*> res;

    for(auto i : routes)
    {
        // if(("1" == i.first->name))
        // {
        //     return std::pair<bool, Vertex*>(true,i.first);
        // }
        // else
        // {
        //     res = i.first->Find(v);
        // }

        std::cout<<i.first->name<<"\n";
    }

    return res;
}

void RoadGraph::AddVetrtex(const std::string& name)
{
    if (auto it = map.find(name);it == map.end())
    {
        map[name] = new Vertex(name);;
    }
    else
        std::cout<<"\nWrong vertex name";
}

void RoadGraph::AddEdge(const std::string& from,const std::string& to, uint cost)
{
    Vertex* vfrom = map.find(from)->second;
    Vertex* vto = map.find(from)->second;

    if((vfrom == nullptr) || (vto == nullptr))
    {
        std::cout<<"\nOne or Both vertexes don't exists on this RoadGraph";
        return;
    }

    vfrom->routes.push_back(std::make_pair(vto, cost));

}

const Map& RoadGraph::GetMap() const
{
    return map;
}

RoadGraph::~RoadGraph()
{
    for(auto i: map)
    {
        delete i.second;
    }
}
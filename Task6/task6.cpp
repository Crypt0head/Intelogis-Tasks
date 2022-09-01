// Задание No6*:
// Есть граф дорог, состоящий из 4-х перекрестков и дорог между ними всеми разной длины.
// Создайте объект для хранения любого графа дорог, добавьте туда 4 перекрёстка и дороги между ними
// какой-нибудь длины, напишите функцию расчета суммарной длины все дорог графа.

#include "../includes/RoadGraph.h"

uint SumOfRoads(const RoadGraph& graph)
{
    const Map& map = graph.GetMap();

    if(map.empty())
        return 0;

    uint res = 0;

    for(auto i : map)
    {
        for(auto j : i.second->routes)
        {
            if(!j.first->mark)
            {
                res+=j.second;
            }
        }

        i.second->mark = true;
    }

    return res;
}

int main()
{
    RoadGraph RG("NewRG");
    RG.AddVetrtex("1");
    RG.AddVetrtex("2");
    RG.AddVetrtex("3");
    RG.AddVetrtex("4");

    RG.AddEdge("1", "2", 5);
    RG.AddEdge("1", "3", 4);
    RG.AddEdge("1", "4", 8);

    RG.AddEdge("2", "3", 8);
    RG.AddEdge("2", "4", 3);

    RG.AddEdge("3", "4", 9);

    std::cout<<"Sum of roads: "<<SumOfRoads(RG)<<'\n';

    return 0;
}
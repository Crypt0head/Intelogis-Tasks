// Задание No7*:
// Есть граф дорог, состоящий из 4-х перекрестков и дорог между ними всеми разной длины.
// Создайте объект для хранения любого графа дорог, добавьте туда 4 перекрёстка и дороги между ними
// какой-нибудь длины, напишите функцию расчета кратчайшего пути между всеми точками графа
// начиная с указанной.

#include <limits>

#include "../includes/RoadGraph.h"

// void FindRoute(const RoadGraph& graph, std::string vname1, std::string vname2)
// {
//     Map map = graph.GetMap();

//     Vertex* v1 = map[vname1];
//     Vertex* v2 = map[vname2];
//     Routes route;

//     v1->mark=true;

//     for(auto i : v1->routes)
//     {
//         if(!i.first->mark)
//         {

//         }
//     }
// }

// void CalculateMinimalRoutesTable(const RoadGraph& graph)
// {
//     uint min = std::numeric_limits<uint>::max();
//     uint count = 0;
//     uint v[graph.GetMap().size()];
//     for(auto i : graph.GetMap())
//     {
//         v[count] = 0;
//         i.second->mark = true;
//         for(auto j : graph.GetMap())
//         {
//             if(!j.second->mark)
//             {

//             }
//         }

//         count++;

//         // for(auto i=0;i<graph.GetMap().size();++i)
//         // {
//         //     std::cout<<v[i]<<" ";
//         // }

//         // std::cout<<std::endl;
//     }
// }

int main()
{
    RoadGraph RG("NewRG");
    RG.AddVetrtex("1");
    RG.AddVetrtex("2");
    RG.AddVetrtex("3");
    // RG.AddVetrtex("4");

    // RG.AddEdge("1", "2", 5);
    // RG.AddEdge("1", "3", 4);
    // RG.AddEdge("1", "4", 8);

    // RG.AddEdge("2", "3", 8);
    // RG.AddEdge("2", "4", 3);

    // RG.AddEdge("3", "4", 9);

    RG.AddEdge("1", "2", 5);
    RG.AddEdge("2", "3", 5);

    Map map = RG.GetMap();

    Vertex* v = map["1"]->Find(map["2"]).second;

    //std::cout<<v->name<<"\n";

    return 0;
}
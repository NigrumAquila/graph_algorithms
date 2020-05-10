#pragma once
#include <list> 

class Graph
{
public:
    int V;
    std::list<int>* adj;
    Graph(int V);

    void addEdge(int v, int w);
};


#include "graph_algorithms.h"

int* BFS(Graph g, int s)
{
    int* nodes = new int[g.V];
    int counter = 0;

    bool* visited = new bool[g.V];
    for (int i = 0; i < g.V; i++)
        visited[i] = false;
    std::list<int> queue;
    visited[s] = true;
    queue.push_back(s);
    std::list<int>::iterator i;

    while (!queue.empty())
    {
        s = queue.front();
        nodes[counter] = s;
        counter++;

        queue.pop_front();
        for (i = g.adj[s].begin(); i != g.adj[s].end(); ++i)
        {
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
    return nodes;
}

void DFSUtil(Graph g, int v, bool visited[], std::list<int>* nodes)
{
    visited[v] = true;
    nodes->push_back(v);
    std::list<int>::iterator i;
    for (i = g.adj[v].begin(); i != g.adj[v].end(); ++i)
        if (!visited[*i])
            DFSUtil(g, *i, visited, nodes);
}

std::list<int> DFS(Graph g, int v)
{
    bool* visited = new bool[g.V];
    for (int i = 0; i < g.V; i++)
        visited[i] = false;

    std::list<int> nodes = {};

    DFSUtil(g, v, visited, &nodes);
    return nodes;
}
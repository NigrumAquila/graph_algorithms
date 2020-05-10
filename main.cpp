#include <iostream> 
#include "src/Graph.h"
#include "src/graph_algorithms.h"

using namespace std;

int main()
{
    int vertics = 6;
    Graph g(vertics);
    g.addEdge(0, 1); g.addEdge(1, 0); g.addEdge(0, 2); g.addEdge(2, 0);
    g.addEdge(1, 3); g.addEdge(3, 1); g.addEdge(1, 4); g.addEdge(4, 1);
    g.addEdge(2, 4); g.addEdge(4, 2); g.addEdge(3, 4); g.addEdge(4, 3);
    g.addEdge(3, 5); g.addEdge(5, 3); g.addEdge(4, 5); g.addEdge(5, 4);

    int startNode = 2;
    cout << "Following is Breadth First Traversal " << "(starting from vertex " << startNode << ") \n";
    

    int* nodes = BFS(g, startNode);
    for (int i = 0; i < vertics; i++) {
        cout << nodes[i] << ' ';
    }

    //list<int> nodes = DFS(g, startNode);
    //for (auto node : nodes) {
    //    cout << node << ' ';
    //}

    
    return 0;
}
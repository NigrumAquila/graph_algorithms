#pragma once
#include "Graph.h"

int* BFS(Graph g, int s);
std::list<int> DFS(Graph g, int v);
void DFSUtil(Graph g, int v, bool visited[], std::list<int>* nodes);
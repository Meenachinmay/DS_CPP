#include "DFS.h"

DFS::DFS(int V)
{
	this->noOfVertices = V;
	adj = new std::vector<int>[V];
}

DFS::~DFS()
{
}

void DFS::addEdge(int u, int v)
{
	adj[u].push_back(v);
}

void DFS::DFSUtil(bool Visited[], int v)
{
	Visited[v] = true;
	std::cout << v << " " << std::endl;

	std::vector<int>::iterator i;

	for (i = adj[v].begin(); i != adj[v].end(); i ++) {
		if (!Visited[*i])
			DFSUtil(Visited,*i);
	}
}

void DFS::preformDFS(int v)
{
	Visited = new bool[this->noOfVertices];
	for (int i = 0; i < this->noOfVertices; i++) {
		Visited[i] = false;
	}

	DFSUtil(Visited, v);
	std::cin.get();
}

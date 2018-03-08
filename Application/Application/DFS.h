#pragma once
#include <vector>
#include <iostream>

class DFS {
private:
	int noOfVertices;
	bool *Visited;
	std::vector<int> *adj;
public:
	DFS(int V);
	~DFS();

	void addEdge(int u, int v);
	void DFSUtil(bool visited[], int v);
	void preformDFS(int v);
};

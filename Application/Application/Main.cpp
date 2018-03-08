//ARRAY IMPLEMENTATION OF QUEUE USING ARRAY
#include <iostream>
#include "Queue.h"
#include "Stack.h"
#include "DFS.h"

int main() {
	
	int noOfVertices; std::cin >> noOfVertices;
	DFS dfs(noOfVertices);
	int noOfEdges; std::cin >> noOfEdges;
	for (int i = 0; i < noOfEdges; i ++) {
		int u;  std::cin >> u;
		int v;  std::cin >> v;
		dfs.addEdge(u, v);
	}
	dfs.preformDFS(0);
	std::cin.get();
	return 0;
}
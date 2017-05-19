/*
he idea is to traverse all vertices of graph using BFS and use a Min Heap to 
store the vertices not yet included in MST. Min Heap is used as a priority queue 
to get the minimum weight edge from the cut. Min Heap is used as time complexity 
of operations like extracting minimum element and decreasing key value is O(LogV) 
in Min Heap.

Following are the detailed steps.
1) Create a Min Heap of size V where V is the number of vertices in the given graph.
 Every node of min heap contains vertex number and key value of the vertex.
2) Initialize Min Heap with first vertex as root (the key value assigned to first 
vertex is 0). The key value assigned to all other vertices is INF (infinite).
3) While Min Heap is not empty, do following
…..a) Extract the min value node from Min Heap. Let the extracted vertex be u.
…..b) For every adjacent vertex v of u, check if v is in Min Heap (not yet included
 in MST). If v is in Min Heap and its key value is more than weight of u-v, then
  update the key value of v as weight of u-v.

*/

#include <algorithm>
#include <iostream>
#include <vector>
#include <priority_queue>

using namespace std;

struct Node {
	int dst;
	int weight;
};
struct Graph {
	Graph(int v) {
		numVex = v;
		adj = new vector<int>[numVex];
	}
	addEdge(int u, int v, weight) {
		adj[u].push_back(new Node(v, weight));
	}
	int numVex;
	vector<Node> *adj;
};

void primMST(Graph *graph)
{
	
}

int main()
{
// Let us create the graph given in above fugure
    int V = 9;
    Graph* graph = new Graph(V);
    addEdge( 0, 1, 4);
    addEdge(0, 7, 8);
    addEdge(1, 2, 8);
    addEdge(1, 7, 11);
    addEdge( 2, 3, 7);
    addEdge(2, 8, 2);
    addEdge(2, 5, 4);
    addEdge( 3, 4, 9);
    addEdge(3, 5, 14);
    addEdge(4, 5, 10);
    addEdge(5, 6, 2);
    addEdge(6, 7, 1);
    addEdge( 6, 8, 6);
    addEdge(7, 8, 7);
 
    primMST(graph);
 
    return 0;	
}

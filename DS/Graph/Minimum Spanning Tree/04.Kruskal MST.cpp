/*

Given a connected and undirected graph, a spanning tree of that graph is a subgraph
that is a tree and connects all the vertices together. A single graph can have many
different spanning trees. A minimum spanning tree (MST) or minimum weight spanning
tree for a weighted, connected and undirected graph is a spanning tree with weight
less than or equal to the weight of every other spanning tree. The weight of 
a spanning tree is the sum of weights given to each edge of the spanning tree.

How many edges does a minimum spanning tree has?
A minimum spanning tree has (V – 1) edges where V is the number of vertices in 
the given graph.

What are the applications of Minimum Spanning Tree?
See this for applications of MST.

Below are the steps for finding MST using Kruskal’s algorithm

1. Sort all the edges in non-decreasing order of their weight.

2. Pick the smallest edge. Check if it forms a cycle with the spanning tree 
formed so far. If cycle is not formed, include this edge. Else, discard it.  

3. Repeat step#2 until there are (V-1) edges in the spanning tree.


Time Complexity: O(ElogE) or O(ElogV). Sorting of edges takes O(ELogE) time. 
After sorting, we iterate through all edges and apply find-union algorithm. 
The find and union operations can take atmost O(LogV) time. So overall complexity 
is O(ELogE + ELogV) time. The value of E can be atmost O(V2), so O(LogV) 
are O(LogE) same. Therefore, overall time complexity is O(ElogE) or O(ElogV)
*/



#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

struct Edge {
	int src, dst;
	int weight;
	//for sort 
	bool operator < (const Edge &edge) const {
	    return this->weight < edge.weight;
	}
};

class Graph {
public:
	Graph(int v, int e) {
		numVex = v;
		numEdge = e;
		edgeVec.resize(e);
	}
	int numVex, numEdge;
	vector<Edge> edgeVec;
};

int findRoot(vector<int> &parent, int x) {
	if (parent[x] == -1) return x;
    else {
    	int temp = findRoot(parent, parent[x]);
    	parent[x] = temp;
    	return temp;
	}
}

void unionSet(vector<int> &parent, int x, int y)
{
	int xRoot = findRoot(parent, x);
	int yRoot = findRoot(parent, y);
	parent[xRoot] = yRoot;
}

int kruskalMST(Graph *graph)
{
	int weight;
	vector<int> parent(graph->numVex, -1);
	sort(graph->edgeVec.begin(), graph->edgeVec.end());
	for (int i = 0; i < graph->numEdge; ++i) {
		int x = findRoot(parent, graph->edgeVec[i].src);
		int y = findRoot(parent, graph->edgeVec[i].dst);
		//not cause cycle, add this edge 
		if (x != y) {
			weight  += graph->edgeVec[i].weight;
			cout << graph->edgeVec[i].src << " " << graph->edgeVec[i].dst << endl;
			parent[x] = y;
		}
	}
	return weight;
}
int main()
{
	  /* Let us create following weighted graph
             10
        0--------1
        |  \     |
       6|   5\   |15
        |      \ |
        2--------3
            4       */
    int V = 4;  // Number of vertices in graph
    int E = 5;  // Number of edges in graph
    Graph* graph = new Graph(V, E);
 
 
    // add edge 0-1
    graph->edgeVec[0].src = 0;
    graph->edgeVec[0].dst = 1;
    graph->edgeVec[0].weight = 10;
 
    // add edge 0-2
    graph->edgeVec[1].src = 0;
    graph->edgeVec[1].dst = 2;
    graph->edgeVec[1].weight = 6;
 
    // add edge 0-3
    graph->edgeVec[2].src = 0;
    graph->edgeVec[2].dst = 3;
    graph->edgeVec[2].weight = 5;
 
    // add edge 1-3
    graph->edgeVec[3].src = 1;
    graph->edgeVec[3].dst = 3;
    graph->edgeVec[3].weight = 15;
 
    // add edge 2-3
    graph->edgeVec[4].src = 2;
    graph->edgeVec[4].dst = 3;
    graph->edgeVec[4].weight = 4;
 
   cout <<  kruskalMST(graph) << endl;
   return 0;
} 

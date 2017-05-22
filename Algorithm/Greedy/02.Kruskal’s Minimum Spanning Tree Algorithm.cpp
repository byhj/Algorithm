/*
What is Minimum Spanning Tree?
Given a connected and undirected graph, a spanning tree of that graph is a subgraph that is a tree and connects all the vertices together. A single graph can have many different spanning trees. A minimum spanning tree (MST) or minimum weight spanning tree for a weighted, connected and undirected graph is a spanning tree with weight less than or equal to the weight of every other spanning tree. The weight of a spanning tree is the sum of weights given to each edge of the spanning tree.

How many edges does a minimum spanning tree has?
A minimum spanning tree has (V ¨C 1) edges where V is the number of vertices in the given graph.

What are the applications of Minimum Spanning Tree?
See this for applications of MST.

Below are the steps for finding MST using Kruskal¡¯s algorithm

1. Sort all the edges in non-decreasing order of their weight.

2. Pick the smallest edge. Check if it forms a cycle with the spanning tree 
formed so far. If cycle is not formed, include this edge. Else, discard it.  

3. Repeat step#2 until there are (V-1) edges in the spanning tree.

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct Edge
{
	int src;
	int dst;
	int weight;
    bool operator < (const Edge &edge) {
		return this->weight < edge.weight;
	}
};

struct Graph {
	Graph(int v, int e) {
		numVex = v;
		numEdge = e;
		edgeVec.resize(numEdge);
	}
	int numVex, numEdge;
	vector<Edge> edgeVec;
};

static int parent[1000];
static int ranks[1000];

void initSet(int n)
{
	for (int i = 0; i < n; ++i) {
		parent[i] = i;
		ranks[i] = 0;
	}
}

int findRoot(int x)
{
	if (parent[x] == x) return x;
	else return parent[x] = findRoot(parent[x]);
}

void unionSet(int x, int y)
{
	x = findRoot(x);
	y = findRoot(y);
	if (x == y) return;
	
	if (ranks[x] < ranks[y]) {
		parent[x] = y;
	}else {
		parent[y] = x;
		if (ranks[x] == ranks[y]) {
			++ranks[x];
		}
	}
}

bool isSame(int x, int y)
{
	return findRoot(x) == findRoot(y);
}

void kruskalMST(Graph *graph)
{
	//step1, sort the edge according the weight
	sort(graph->edgeVec.begin(), graph->edgeVec.end());
	int edgeCnt = 0; //result index
	int curIndex = 0; //for sourted edges
	vector<Edge> ans;
	while (edgeCnt < graph->numVex-1) {
		//step2, pick smallest edge 
		Edge edge = graph->edgeVec[curIndex++];
		int x = findRoot(edge.src);
		int y = findRoot(edge.dst);
		//if not cause cycle include this edge
		if (x != y) {
			ans.push_back(edge);
			unionSet(x, y);
			++edgeCnt;
		}
	}
	for (auto edge : ans) {
		cout << edge.src << " " << edge.dst << " " << edge.weight << endl;
	}
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
    initSet(V);
 
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
 
    kruskalMST(graph);
 
    return 0;
}

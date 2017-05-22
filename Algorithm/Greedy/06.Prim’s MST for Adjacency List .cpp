/*
We have discussed Prim’s algorithm and its implementation for adjacency matrix representation of graphs. The time complexity for the matrix representation is O(V^2). In this post, O(ELogV) algorithm for adjacency list representation is discussed.
As discussed in the previous post, in Prim’s algorithm, two sets are maintained, one set contains list of vertices already included in MST, other set contains vertices not yet included. With adjacency list representation, all vertices of a graph can be traversed in O(V+E) time using BFS. The idea is to traverse all vertices of graph using BFS and use a Min Heap to store the vertices not yet included in MST. Min Heap is used as a priority queue to get the minimum weight edge from the cut. Min Heap is used as time complexity of operations like extracting minimum element and decreasing key value is O(LogV) in Min Heap.

Following are the detailed steps.
1) Create a Min Heap of size V where V is the number of vertices in the given graph. Every node of min heap contains vertex number and key value of the vertex.
2) Initialize Min Heap with first vertex as root (the key value assigned to first vertex is 0). The key value assigned to all other vertices is INF (infinite).
3) While Min Heap is not empty, do following
…..a) Extract the min value node from Min Heap. Let the extracted vertex be u.
…..b) For every adjacent vertex v of u, check if v is in Min Heap (not yet included in MST). If v is in Min Heap and its key value is more than weight of u-v, then update the key value of v as weight of u-v.

*/

#include <iostream>
#include <vector>
#include <priority_queue>

using namespace std;

struct Node {
	Node(int v, int w) {
		dst = v;
		weight = w;
	}
    int dst;
    int weight;
}
struct Graph{
	Graph(int n)  {
		n = numVex;
		adj = new vector<Node>[n];
	}
	addEdge(int u, int v, int w) {
		//undirected graph
		adj[u].push_back(new Node(v, w));
		adj[v].push_back(new Node(u, w));
	}
    int numVex;
	vector<Node> *adj;
};

void primMST(Graph *graph)
{
	int numVex = graph->numVex;
	int parent[numVex];
	int key[numVex];
	priority_queue<Node> nodeQue;
	for (int v = 1; v < V; ++v) {
		parent[v] = -1;
		key[v] = INT_MAX;
		nodeQue.push(new Node(v, key[v]));
		
	}
	
	//make 0th vertex as first node
	key[0] = 0;

	while (!nodeQue.empty()) {
		//Extract the minumum key vale
		Node *node = &nodeQue.top();
		nodeQue.pop();
		int u = node->dst;
		
		//Traverse through all adjacent vertices of u
		for (auto node : graph->adj[u]) {
			int v = node.dst;
            // If v is not yet included in MST and weight of u-v is
            // less than key value of v, then update key value and
            // parent of v
            if (nodeQue.find(v) != nodeQue.end() && node->weight < key[v]) {
            	key[v] = node->weight;
            	parent[v] = u;
			}
		}
	}
	
}
int main()
{
	
    // Let us create the graph given in above fugure
    int V = 9;
    Graph* graph = new Graph(V);
    addEdge(graph, 0, 1, 4);
    addEdge(graph, 0, 7, 8);
    addEdge(graph, 1, 2, 8);
    addEdge(graph, 1, 7, 11);
    addEdge(graph, 2, 3, 7);
    addEdge(graph, 2, 8, 2);
    addEdge(graph, 2, 5, 4);
    addEdge(graph, 3, 4, 9);
    addEdge(graph, 3, 5, 14);
    addEdge(graph, 4, 5, 10);
    addEdge(graph, 5, 6, 2);
    addEdge(graph, 6, 7, 1);
    addEdge(graph, 6, 8, 6);
    addEdge(graph, 7, 8, 7);
 
    primMST(graph);
 
    return 0;
}

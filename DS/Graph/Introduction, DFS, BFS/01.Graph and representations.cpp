/*
Graph is a data structure that consists of following two components:
1. A finite set of vertices also called as nodes.
2. A finite set of ordered pair of the form (u, v) called as edge. The pair is 
ordered because (u, v) is not same as (v, u) in case of directed graph(di-graph).
 The pair of form (u, v) indicates that there is an edge from vertex u to vertex v. 
 The edges may contain weight/value/cost.

Following two are the most commonly used representations of graph.
1. Adjacency Matrix
2. Adjacency List

Adjacency Matrix:
Adjacency Matrix is a 2D array of size V x V where V is the number of vertices
 in a graph. Let the 2D array be adj[][], a slot adj[i][j] = 1 indicates that 
 there is an edge from vertex i to vertex j. Adjacency matrix for undirected 
 graph is always symmetric. Adjacency Matrix is also used to represent weighted 
 graphs. If adj[i][j] = w, then there is an edge from vertex i to vertex j with 
 weight w.

Pros: Representation is easier to implement and follow. Removing an edge takes O(1) 
time. Queries like whether there is an edge from vertex ‘u’ to vertex ‘v’ are efficient and can be done O(1).

Cons: Consumes more space O(V^2). Even if the graph is sparse(contains less number 
of edges), it consumes the same space. Adding a vertex is O(V^2) time.



Adjacency List:
An array of linked lists is used. Size of the array is equal to number of vertices.
 Let the array be array[]. An entry array[i] represents the linked list of vertices 
 adjacent to the ith vertex. This representation can also be used to represent a 
 weighted graph. The weights of edges can be stored in nodes of linked lists. 
 Following is adjacency list representation of the above graph.
 
 Pros: Saves space O(|V|+|E|) . In the worst case, there can be C(V, 2) number
  of edges in a graph thus consuming O(V^2) space. Adding a vertex is easier.

Cons: Queries like whether there is an edge from vertex u to vertex v are not 
efficient and can be done O(V).
*/

#include <iostream>
#include <vector>

class Graph {
public:
	Graph(int num) {
		this->num = num;
		adj = new vector<int>[num];
	}
	~Graph() {
		delete adj [];
	}
	void addEdge(int u, int v) {
		adj[u]->push_back(v);
		adj[v]->push_back(u);
	}
private:
	int num;
	vector<int> *adj;
};



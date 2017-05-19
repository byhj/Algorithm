/*

A disjoint-set data structure is a data structure that keeps track of a set of 
elements partitioned into a number of disjoint (non-overlapping) subsets. 
A union-find algorithm is an algorithm that performs two useful operations on
 such a data structure:

Find: Determine which subset a particular element is in. This can be used for 
determining if two elements are in the same subset.

Union: Join two subsets into a single subset.
*/


#include <vector>
#include <iostream>

using namespace std;


struct Edge {
	int src, dst;
};
class Graph
{
public:
	Graph(int v, int e) {
		numVex = v;
		numEdge = e;
		edge = new Edge[numEdge];
	}
	int numVex, numEdge;
	Edge *edge;
};


//find subset of i
int findSet(vector<int> &parent, int i) {
	if (parent[i] == -1)
	   return i;
    return findSet(parent, parent[i]);
}

void unionSet(vector<int> &parent, int x, int y)
{
	int xParent = findSet(parent, x);
	int yParent = findSet(parent, y);
	parent[xParent] = yParent;
}


bool isCycle(Graph *graph)
{
	vector<int> parent(graph->numVex);
	for (int i = 0; i < parent.size(); ++i) {
		parent[i] = -1;
	}
	for (int i = 0; i < graph->numEdge; ++i) {
		int x = findSet(parent, graph->edge[i].src);
		int y = findSet(parent, graph->edge[i].dst);
		if (x == y) return 1;
		
		unionSet(parent, x, y);
	}
	return 0;
}
int main()
{
	  /* Let us create following graph
         0
        |  \
        |    \
        1-----2 */    
    int V = 3, E = 3;
    Graph* graph = new Graph(V, E);
 
    // add edge 0-1
    graph->edge[0].src = 0;
    graph->edge[0].dst = 1;
 
    // add edge 1-2
    graph->edge[1].src = 1;
    graph->edge[1].dst = 2;
 
    // add edge 0-2
    graph->edge[2].src = 0;
    graph->edge[2].dst = 2;
 
    if (isCycle(graph))
        cout << "graph contains cycle"  << endl;
    else
        cout <<  "graph doesn't contain cycle" << endl;
 
    return 0;
}

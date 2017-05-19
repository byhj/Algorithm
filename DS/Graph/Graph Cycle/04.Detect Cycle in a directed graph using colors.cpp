/*

In this post a different solution is discussed. The solution is from CLRS book. 
The idea is to do DFS of given graph and while doing traversal, assign one of
 the below three colors to every vertex.

WHITE : Vertex is not processed yet.  Initially
        all vertices are WHITE.

GRAY : Vertex is being processed (DFS for this 
       vertex has started, but not finished which means
       that all descendants (ind DFS tree) of this vertex
       are not processed yet (or this vertex is in function
       call stack)

BLACK : Vertex and all its descendants are 
        processed.

While doing DFS, if we encounter an edge from current 
vertex to a GRAY vertex, then this edge is back edge 
and hence there is a cycle.

*/

#include <vector>
#include <iostream>

using namespace std;

enum Color {
	WHITE = 0,
	GRAY,
	BLACK
};

class Graph{
public:
     Graph(int num) {
     	this->num = num;
     	adj = new vector<int>[num];
     	visited.resize(num);
     	colorVec.resize(num);
     	for (int i = 0; i < colorVec.size(); ++i) {
     		colorVec[i] = WHITE;
		 }
	 }	
	 void addEdge(int u, int v)
	 {
	 	adj[u].push_back(v);
	 }
	 bool isCycleUtil(int s);
	 bool isCycle();
private:
    int num;
	vector<int> *adj;
	vector<int> visited;
	vector<Color> colorVec;
}; 


bool Graph::isCycleUtil(int s)
{
 // GRAY :  This vertex is being processed (DFS
    //         for this vertex has started, but not
    //         ended (or this vertex is in function
    //         call stack)
    colorVec[s] = GRAY;
 
	for (int val : adj[s]) {
	    if (colorVec[val] == GRAY) return true;  
	    if (colorVec[val] == WHITE && isCycleUtil(val)) return true;
	}
    colorVec[s] = BLACK;
    
	return false;
}
bool Graph::isCycle()
{
	for (int i = 0; i < num; ++i) {
		if (colorVec[i] == WHITE && isCycleUtil(i)) {
			return true;
		}
	}
	return false;
}

int main()
{
	Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    if(g.isCycle())
        cout << "Graph contains cycle";
    else
        cout << "Graph doesn't contain cycle";
    return 0;
	
}

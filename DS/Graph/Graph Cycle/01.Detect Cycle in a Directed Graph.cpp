/*

Given a directed graph, check whether the graph contains a cycle or not. Your 
function should return true if the given graph contains at least one cycle, 
else return false. For example, the following graph contains three cycles 
0->2->0, 0->1->2->0 and 3->3, so your function must return true.

Depth First Traversal can be used to detect cycle in a Graph. DFS for a connected 
graph produces a tree. There is a cycle in a graph only if there is a back edge 
present in the graph. A back edge is an edge that is from a node to itself (selfloop)
 or one of its ancestor in the tree produced by DFS. In the following graph, there 
 are 3 back edges, marked with cross sign. We can observe that these 3 back edges 
 indicate 3 cycles present in the graph.



For a disconnected graph, we get the DFS forrest as output. To detect cycle, we
 can check for cycle in individual trees by checking back edges.

To detect a back edge, we can keep track of vertices currently in recursion stack 
of function for DFS traversal. If we reach a vertex that is already in the recursion
 stack, then there is a cycle in the tree. The edge that connects current vertex
  to the vertex in the recursion stack is back edge. We have used recStack[] array
   to keep track of vertices in the recursion stack.

Time:  O(V + E) 
*/
#include <vector>
#include <iostream>

using namespace std;

class Graph{
public:
     Graph(int num) {
     	this->num = num;
     	adj = new vector<int>[num];
     	visited.resize(num);
     	recSta.resize(num);
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
	//for check the cycle in rec stack
	vector<int> recSta;	
}; 


bool Graph::isCycleUtil(int s)
{
	if (!visited[s]) {
		visited[s] = true;
		recSta[s] = true;
		//recur for all vertices adjacent to this vertex
		for (int val : adj[s]) {
			if (!visited[s] && isCycleUtil(val)) return true;
			else if (recSta[val]) return true;
 		}
	}
	//remove the vertex from recursion stack
	recSta[s] = false;
	return false;
}
bool Graph::isCycle()
{
	for (int i = 0; i < num; ++i) {
		if (isCycleUtil(i)) {
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

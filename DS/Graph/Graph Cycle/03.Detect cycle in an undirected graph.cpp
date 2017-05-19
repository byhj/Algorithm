/*

We have discussed cycle detection for directed graph. We have also discussed a 
union-find algorithm for cycle detection in undirected graphs. The time complexity 
of the union-find algorithm is O(ELogV). Like directed graphs, we can use DFS to
detect cycle in an undirected graph in O(V+E) time. We do a DFS traversal of 
the given graph. For every visited vertex ‘v’, if there is an adjacent ‘u’ such
that u is already visited and u is not parent of v, then there is a cycle in graph.
If we don’t find such an adjacent for any vertex, we say that there is no cycle.
The assumption of this approach is that there are no parallel edges between any two vertices.

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
	 }	
	 void addEdge(int u, int v)
	 {
	 	//for undirectd graph
	 	adj[u].push_back(v);
	 	adj[v].push_back(u);
	 }
	 bool isCycleUtil(int s, int parent);
	 bool isCycle();
private:
    int num;
	vector<int> *adj;
	vector<int> visited;	
}; 


bool Graph::isCycleUtil(int s, int parent)
{
		visited[s] = true;
		//recur for all vertices adjacent to this vertex
		for (int val : adj[s]) {
			if (!visited[s] && isCycleUtil(val, s)) return true;
            else if (val != parent) return true;
  		}
	return false;
}
bool Graph::isCycle()
{
	for (int i = 0; i < num; ++i) {
		if (!visited[i] && isCycleUtil(i, -1)) {
            return true;
		}
	}
	return false;
}

int main()
{
   Graph g1(5);
    g1.addEdge(1, 0);
    g1.addEdge(0, 2);
    g1.addEdge(2, 0);
    g1.addEdge(0, 3);
    g1.addEdge(3, 4);
    g1.isCycle()? cout << "Graph contains cycle\n":
                   cout << "Graph doesn't contain cycle\n";
 
    Graph g2(3);
    g2.addEdge(0, 1);
    g2.addEdge(1, 2);
    g2.isCycle()? cout << "Graph contains cycle\n":
                   cout << "Graph doesn't contain cycle\n";
 
    return 0;
	
}

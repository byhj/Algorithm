/*
In a Directed acyclic graph many a times we can have vertices which are unrelated 
to each other because of which we can order them in many ways. These various topological
 sorting is important in many cases, for example if some relative weight is also
  available between the vertices, which is to minimize then we need to take care 
  of relative ordering as well as their relative weight, which creates the need 
  of checking through all possible topological ordering.
We can go through all possible ordering via backtracking , the algorithm step 
are as follows :

Initialize all vertices as unvisited.
Now choose vertex which is unvisited and has zero indegree and decrease indegree 
of all those vertices by 1 (corresponding to removing edges) now add this vertex
 to result and call the recursive function again and backtrack.
After returning from function reset values of visited, result and indegree for
 enumeration of other possibilities.

*/

#include <vector>
#include <iostream>
#include <stack>

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
	 	adj[u].push_back(v);
	 }
	 bool topoSortUtil(int s);
	 bool topoSort();
private:
    int num;
	vector<int> *adj;
	vector<int> visited;
	stack<int> recSta;	
}; 


bool Graph::topoSortUtil(int s)
{
    visited[s] = true;
	
    for (int val : adj[s]) {
        if (!visited[val])
	        topoSortUtil(val);
	}
	recSta.push(s);
}

bool Graph::topoSort()
{
	for (int i = 0; i < num; ++i) {
		if (!visited[i]) {
			topoSortUtil(i);
		}
	}
	while (!recSta.empty()) {
		cout << recSta.top();
		recSta.pop();
	}
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
 
    return 0;
	
}

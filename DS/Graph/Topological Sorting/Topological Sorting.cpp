/*
Algorithm to find Topological Sorting:
We recommend to first see implementation of DFS here. We can modify DFS to find 
Topological Sorting of a graph. In DFS, we start from a vertex, we first print 
it and then recursively call DFS for its adjacent vertices. In topological sorting,
 we use a temporary stack. We don’t print the vertex immediately, we first 
 recursively call topological sorting for all its adjacent vertices, then push 
 it to a stack. Finally, print contents of stack. Note that a vertex is pushed 
 to stack only when all of its adjacent vertices (and their adjacent vertices 
 and so on) are already in stack.

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

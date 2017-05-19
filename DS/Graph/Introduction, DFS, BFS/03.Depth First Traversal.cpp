//Time Complexity: O(V+E) where V is number of vertices in the graph and E is number of edges in the graph.
#include <iostream>
#include <vector>
#include <iterator>

using namespace std;

class Graph
{
public:
   Graph(int numVex);
   void addEdge(int u, int v);
   void dfs(int v);
   
 private:
    int numVex;	
    vector<int> *adjVec; 
    vector<int> visited;
};

Graph::Graph(int numVex)
{
	this->numVex = numVex;
	adjVec = new vector<int>[numVex];
	visited.resize(numVex);
}

void Graph::addEdge(int u, int v)
{
	adjVec[u].push_back(v);
}

void Graph::dfs(int v)
{
	//make cureent vertex as visited and output
    visited[v] = 1;
    cout << v << " ";
    
    //recur for all the vertices adjacent to this vertex
    for (auto iter = adjVec[v].begin(); iter != adjVec[v].end(); ++iter) {
    	if (!visited[*iter])
    	   dfs(*iter);
	} 
}

int main()
{
    // Create a graph given in the above diagram
    Graph g(4);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(2, 0);
    g.addEdge(2, 3);
    g.addEdge(3, 3);
 
    cout << "Following is Depth First Traversal (starting from vertex 2) \n";
    g.dfs(2);
 
    return 0;
}


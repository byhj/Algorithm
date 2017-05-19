//Time Complexity: O(V+E) where V is number of vertices in the graph and E is number of edges in the graph.
#include <iostream>
#include <vector>
#include <iterator>
#include <stack>

using namespace std;

class Graph
{
public:
   Graph(int numVex);
   void addEdge(int u, int v);
   void dfs(int v);
   void dfsUtil();
   
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

void Graph::dfs(int s)
{
	//make cureent vertex as visited and output
    stack<int> vertexSta;
    vertexSta.push(s);
    
     while (!vertexSta.empty()) {
     	s = vertexSta.top();
     	vertexSta.pop();
    	if (!visited[s]) {
    		cout << s << " ";
    		visited[s] = true;
		}
		for (int val : adjVec[s]) {
 	        if (!visited[val]) {
    	       vertexSta.push(val);
	       }
		}
	 }

}
void Graph::dfsUtil()
{
    for (int i = 0; i < numVex; i++)
        if (!visited[i])
            dfs(i);
}

/*

Note that the above implementation prints only vertices that are reachable from a given vertex. For example, if we remove edges 0-3 and 0-2, the above program would only print 0. To print all vertices of a graph, we need to call DFS for every vertex. Below is C++ implementation for the same.

*/


int main()
{
    // Create a graph given in the above diagram
    Graph g(5);
    g.addEdge(1, 0);
    g.addEdge(0, 2);
    g.addEdge(2, 1);
    g.addEdge(0, 3);
    g.addEdge(1, 4);
 
    cout << "Following is Depth First Traversal (starting from vertex 2) \n";
    g.dfs(0);
 
    return 0;
}


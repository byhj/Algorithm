//Time Complexity: O(V+E) where V is number of vertices in the graph and E is number of edges in the graph.

#include <iostream>
#include <vector>
#include <iterator>
#include <deque>

using namespace std;

class Graph
{
public:
   Graph(int numVex);
   void addEdge(int u, int v);
   void bfs(int v);
   
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
	//directed graph for one edge of two nodes
	adjVec[u].push_back(v);
}

void Graph::bfs(int v)
{
	//make cureent vertex as visited and output
    deque<int> vertexQue; 
	visited[v] = 1;
    vertexQue.push_back(v);

    while (!vertexQue.empty()) {
    	int vertex = vertexQue.front();
    	cout << vertex << " ";
    	vertexQue.pop_front();
    	
       //for all the vertices adjacent to this vertex
       for (auto iter = adjVec[vertex].begin(); iter != adjVec[vertex].end(); ++iter) {
       	if (!visited[*iter]) {
       		visited[*iter] = 1;
       		vertexQue.push_back(*iter);
		   }
	   }
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
 
    cout << "Following is Breadth First Traversal (starting from vertex 2) \n";
    g.bfs(2);
 
    return 0;
}



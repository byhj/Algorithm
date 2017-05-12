
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
/*
Following are the problems that use DFS as a bulding block.

1) For an unweighted graph, DFS traversal of the graph produces the minimum spanning tree and all pair shortest path tree.

2) Detecting cycle in a graph 
A graph has cycle if and only if we see a back edge during DFS. So we can run DFS for the graph and check for back edges. (See this for details)

3) Path Finding
We can specialize the DFS algorithm to find a path between two given vertices u and z.
i) Call DFS(G, u) with u as the start vertex.
ii) Use a stack S to keep track of the path between the start vertex and the current vertex.
iii) As soon as destination vertex z is encountered, return the path as the
contents of the stack

See this for details.

4) Topological Sorting
Topological Sorting is mainly used for scheduling jobs from the given dependencies among jobs. In computer science, applications of this type arise in instruction scheduling, ordering of formula cell evaluation when recomputing formula values in spreadsheets, logic synthesis, determining the order of compilation tasks to perform in makefiles, data serialization, and resolving symbol dependencies in linkers [2].

5) To test if a graph is bipartite
We can augment either BFS or DFS when we first discover a new vertex, color it opposited its parents, and for each other edge, check it doesn¡¯t link two vertices of the same color. The first vertex in any connected component can be red or black! See this for details.

6) Finding Strongly Connected Components of a graph A directed graph is called strongly connected if there is a path from each vertex in the graph to every other vertex. (See this for DFS based algo for finding Strongly Connected Components)

7) Solving puzzles with only one solution, such as mazes. (DFS can be adapted to find all solutions to a maze by only including nodes on the current path in the visited set.)
*/

/*
Breadth First Traversal (or Search) for a graph is similar to Breadth First
 Traversal of a tree (See method 2 of this post). The only catch here is, unlike 
 trees, graphs may contain cycles, so we may come to the same node again. 
 To avoid processing a node more than once, we use a boolean visited array. 
 For simplicity, it is assumed that all vertices are reachable from the starting vertex.
For example, in the following graph, we start traversal from vertex 
2. When we come to vertex 0, we look for all adjacent vertices of it. 
2 is also an adjacent vertex of 0. If we don¡¯t mark visited vertices, 
then 2 will be processed again and it will become a non-terminating process. 
A Breadth First Traversal of the following graph is 2, 0, 3, 1.


*/ 

class Graph {
    int num;
	vector<int> *adj;
public:
    Graph(int v);
	void addEdge(int u, int v);
	void BFS(int s);
};

Graph::Graph(int num)
{
	this->num = num;
	adj = new vector<int>[num];
}

void Graph::addEdge(int u, int v)
{
	adj[u].push_back(v);
}

void Graph::BFS(int s)
{
	vector<int> visited(num);
	queue<int> que;
	que.push(s);
	while (que.empty()) {
		s = que.front();
		que.pop_front();
		cout << s << " ";
		//for all adjacent
		for (auto val : adj[s]) {
			if (!visited[val]) {
				visited[val] = true;
				que.push_back(val);
			}
		}
	} 
}

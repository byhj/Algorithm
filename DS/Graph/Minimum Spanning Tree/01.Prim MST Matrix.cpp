/*

Prim¡¯s algorithm is also a Greedy algorithm. It starts with an empty spanning tree. 
The idea is to maintain two sets of vertices. The first set contains the vertices 
already included in the MST, the other set contains the vertices not yet included.
 At every step, it considers all the edges that connect the two sets, and picks 
 the minimum weight edge from these edges. After picking the edge, it moves the 
 other endpoint of the edge to the set containing MST.
A group of edges that connects two set of vertices in a graph is called cut in 
graph theory. So, at every step of Prim¡¯s algorithm, we find a cut (of two sets,
 one contains the vertices already included in MST and other contains rest of the verices),
  pick the minimum weight edge from the cut and include this vertex to MST Set 
  (the set that contains already included vertices).

How does Prim¡¯s Algorithm Work? The idea behind Prim¡¯s algorithm is simple, 
a spanning tree means all vertices must be connected. So the two disjoint subsets
 (discussed above) of vertices must be connected to make a Spanning Tree. And they 
 must be connected with the minimum weight edge to make it a Minimum Spanning Tree.

Algorithm
1) Create a set mstSet that keeps track of vertices already included in MST.
2) Assign a key value to all vertices in the input graph. Initialize all key v
alues as INFINITE. Assign key value as 0 for the first vertex so that it is picked first.
3) While mstSet doesn¡¯t include all vertices
¡­.a) Pick a vertex u which is not there in mstSet and has minimum key value.
¡­.b) Include u to mstSet.
¡­.c) Update key value of all adjacent vertices of u. To update the key values, 
iterate through all adjacent vertices. For every adjacent vertex v, if weight of 
edge u-v is less than the previous key value of v, update the key value as weight of u-v

*/

void primMST(in graph[v][v])
{
	
mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm}

/*
就是 find 操作了，如果每次都沿着父节点向上查找，那时间复杂度就是树的高度，完全不可能达到常数级。
这里需要应用一种非常简单而有效的策略——路径压缩。
路径压缩，就是在每次查找时，令查找路径上的每个节点都直接指向根节点，

*/ 


int parent[1000];  //parent
int rank[1000];   //tree height

void init(int n) {
	for (int i = 0; i < n; ++i) {
		parent[i] = i;
		rank[i] = 0;
	}
} 
int findRoot(int x) {
	if (parent[x] == x) return x;
	else {
		//path contense
		return parent[x] = findRoot(parent[x]);
	}
} 

void unionSet(int x, int y) 
{
	x = findRoot(x);
	y = findRoot(y);
	if (x == y) return;
	//make small rank to big rank
	if (rank[x] < rank[y]) {
		parent[x] = y;
	} else {
		parent[y] = x;
		if (rank[x] == rank[y]) {
		    ++rank[x];
		}
	}
} 

bool isSame(int x, int y)
{
	return findRoot(x) == findRoot(y);
}

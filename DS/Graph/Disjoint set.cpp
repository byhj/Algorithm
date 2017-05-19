/*
���� find �����ˣ����ÿ�ζ����Ÿ��ڵ����ϲ��ң���ʱ�临�ӶȾ������ĸ߶ȣ���ȫ�����ܴﵽ��������
������ҪӦ��һ�ַǳ��򵥶���Ч�Ĳ��ԡ���·��ѹ����
·��ѹ����������ÿ�β���ʱ�������·���ϵ�ÿ���ڵ㶼ֱ��ָ����ڵ㣬

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

#include <iostream>
#include <stack>
#include <vector>

using namespace std;

int partition(vector<int> &vec, int low, int high)
{
	int pivot = vec[high];
	int i = low-1;
	for (int j = low; j < high; ++j) {
		if (vec[j] <= pivot) {
			swap(vec[++i], vec[j]);
		}
	}
	swap(vec[i+1], vec[high]);
	return i+1;
}

void quickSort(vector<int> &vec, int low, int high)
{
	stack<int> recSta;
	recSta.push(low);
	recSta.push(high);
	while (!recSta.empty()) {
	     high = recSta.top();
		 recSta.pop();
		 low = recSta.top();
		 recSta.pop();
		 int p = partition(vec, low, high);
		 //if left side of pivot has elements
		 if (p-1 > low) {
		 	recSta.push(low);
		 	recSta.push(p-1);
		 }
		 if (p+1 < high) {
		 	recSta.push(p+1);
		 	recSta.push(high);
		 }
	}
}

int main()
{
    vector<int> vec = {4, 3, 5, 2, 1, 3, 2, 3};
    quickSort( vec, 0, vec.size()-1);
    for (auto val : vec) {
    	cout << val << " ";
	}
	return 0;
}

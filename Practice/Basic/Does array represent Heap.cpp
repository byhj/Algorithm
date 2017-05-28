#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n);
	    for (int i = 0; i < n; ++i) {
	        cin >> vec[i];
	    }
	    bool isMaxHeap = true;
	    for (int i = 0; i < n/2; ++i) {
	        //make sure last parent node has one or two child leaf
	        if (vec[i] < vec[i*2+1] ||(i*2+2 < n && vec[i] < vec[i*2+2]) )
	          isMaxHeap = false;
	    }
	    cout << isMaxHeap << endl;
	}
	return 0;
}

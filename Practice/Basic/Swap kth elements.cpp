#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t, n, a;
	cin >> t;
	while (t--) {
	    cin >> n >> a;
	    vector<int> vec(n);
	    for (int i = 0; i < n; ++i) cin >> vec[i];
	    swap(vec[a-1], vec[vec.size()-a]);
	    for (auto val : vec) {
	        cout << val << " ";
	    }
	    cout << endl;
	}
	return 0;
}

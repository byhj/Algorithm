#include <iostream>
#include <algorithm>

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
	    sort(vec.begin(), vec.end());
	    for (auto val : vec) 
	       cout << val << " ";
	   cout << endl;
	}
	return 0;
}

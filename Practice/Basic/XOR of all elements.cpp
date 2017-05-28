#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n);
	    int orx = 0;
	    for (int i = 0; i < n; ++i) {
	        cin >> vec[i];
	        orx ^= vec[i];
	    }
	    for (auto val : vec) {
	        cout << (orx ^ val) << " ";
	    }
	    cout << endl;
	}
	return 0;
}

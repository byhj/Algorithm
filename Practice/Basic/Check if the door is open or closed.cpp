#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n, 0);
	    for (int i = 1; i <= n; ++i) {
	        for (int j = 1; i*j <= n; ++j) {
	            vec[i*j-1] = !vec[i*j-1];
	        }
	    }
	    for (auto val : vec) {
	        cout << val << " ";
	    }
	    cout << endl;
	}
	return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n+1, 1);
	    for (int i = 3; i <= n; ++i) {
	        vec[i] = (vec[i-2] + vec[i-3]) % 1000000007;
	    }
	    cout << vec[n] << endl;
	}
	return 0;
}

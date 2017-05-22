#include <iostream>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n, val;
	    cin >> n;
	    int ans = 0;
	    for (int i = 1; i < n; ++i) {
	        cin >> val;
	        ans ^= (val ^ i);
	    }
	    ans ^= n;
	    cout << ans << endl;
	}
	return 0;
}

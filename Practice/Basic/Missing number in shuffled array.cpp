#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int ans = 0;
	    int val;
	    for (int i = 0; i < 2*n-1; ++i) {
	        cin >> val;
	        ans ^= val;
	    }
	    cout << ans << endl;
	}
	return 0;
}

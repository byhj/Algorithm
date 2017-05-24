#include <iostream>
using namespace std;

int main() {
	int t, n, val;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int ans = 1;
	    while (n--) {
	        cin >> val;
	        ans *= val;
	    }
	    cout << ans << endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    long long ans = 1;
	    for (int i = 1; i <= n; ++i) {
	        ans *= i;
	    }
	    cout << ans << endl;
	}
	return 0;
}

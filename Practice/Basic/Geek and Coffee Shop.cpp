#include <iostream>
using namespace std;

int main() {
	int t, n, m;
	cin >> t;
	while (t--) {
	    cin >> n >> m;
	    if (m >= 32) cout << 0 << endl;
	    else cout << (n >> m-1) << endl;
	}
	return 0;
}

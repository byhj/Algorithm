#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int r = (n & 0x0f) << 4;
	    n >>= 4;
	    cout << n + r << endl;
	}
	return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    cout << floor(cbrt(n)) << endl;
	}
	return 0;
}

#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	while (t--) {
	    cin >> a >> b;
	    cout << floor(sqrt(b))  - ceil(sqrt(a)) + 1 << endl;
	}
	return 0;
}

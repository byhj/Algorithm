#include <iostream>
using namespace std;

int main() {
	int t, p, y, r;
	cin >> t;
	while (t--) {
	    cin >> p >> y >> r;
	    cout << p * y * r / 100 << endl;
	}
	return 0;
}

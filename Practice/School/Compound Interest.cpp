#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t, p, y, n, r;
	cin >> t;
	while (t--) {
	    cin >> p >> y >> n >> r;
	    p = floor(p * pow( (1.0 + r/(100.0*n)), n*y) );
	    cout << p << endl;
	}
	return 0;
}

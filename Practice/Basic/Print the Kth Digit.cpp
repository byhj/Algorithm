#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t, a, b, n;
	cin >> t;
	while (t--) {
	    cin >> a >> b >> n;
	    long long c = pow(a, b);
	    int i = 0;
	    while (c) {
	        int t = c % 10;
	        if (++i == n) {
	            cout << t << endl;
	            break;
	        }
	        c /= 10;
	    }
	}
	return 0;
}

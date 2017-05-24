#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int ans = 0;
	    while (n) {
	        n &= (n-1);
	        ++ans;
	    }
	    cout << (ans % 2 == 0 ? "even" : "odd") << endl;
	}
	return 0;
}

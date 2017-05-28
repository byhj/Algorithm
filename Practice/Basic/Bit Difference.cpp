#include <iostream>
using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	while (t--) {
	    cin >> a >> b;
	    int c = a ^ b;
	    int ans = 0;
	    while (c) {
	        c &= (c-1);
	        ++ans;
	    }
	    cout << ans << endl;
	}
	return 0;
}

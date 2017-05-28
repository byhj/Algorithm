#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int ans = 0;
	    int a = 1;
	    while (n) {
	        if (n % 10 == 1)
	           ans += a;
	        a *= 2;
	        n /= 10;
	    }
	    cout << ans << endl;
	}
	return 0;
}

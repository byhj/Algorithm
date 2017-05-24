#include <iostream>
using namespace std;

int main() {
	int t, n, a, d;
	cin  >> t;
	while (t--) {
	    cin >> n >> a >> d;
	    int ans = n * (2*a+(n-1)*d)/2;
	    cout << ans << endl;
	}
	return 0;
}

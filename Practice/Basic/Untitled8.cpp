#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    long long ans = 0;
	    int val = 0;
	    while (n--) {
	        cin >> val;
	        ans += val;
	    }
	    cout << ans << endl;
	}
	return 0;
}

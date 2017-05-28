#include <iostream>
#include <set>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int ans = 0;
	    int i;
	    for (i = 1; i*i < n; ++i) {
	        if (n % i == 0)
	           ans += 2;
	    }
	    if (i*i == n) ++ans;
	    
	    cout << ans << endl;
	}
	return 0;
}

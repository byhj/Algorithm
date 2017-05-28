#include <iostream>
using namespace std;

int countBit(int n) {
    int ans = 0;
    while (n) {
        n &= n-1;
        ++ans;
    }
    return ans;
}
int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int ans = 0;
	    for (int i = 1; i <= n; ++i) {
	        ans += countBit(i);
	    }
	    cout << ans << endl;
	}
	return 0;
}

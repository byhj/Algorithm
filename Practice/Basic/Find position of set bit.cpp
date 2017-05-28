#include <iostream>
using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        if ( (n & (n-1) ) != 0) cout << -1 << endl;
        else {
            int ans = 0;
            while (n) {
                ++ans;
                n >>= 1;
            }
            cout << ans << endl;
        }
    }
	return 0;
}

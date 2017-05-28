#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int a = n;
	    int ans = 0;
	    while (a != 1) {
	        if (a == 0)
	         break;
	        if (a == 2) {
	            ++ans;
	            break;
	        }
	        if (a % 3 == 0) {
	            a /= 3;
	            ans += 1;
	        } else if (a % 3 == 1) {
	            a -= 1;
	            ans += 1;
	        }else {
               a -= 2;
               ans += 2;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}

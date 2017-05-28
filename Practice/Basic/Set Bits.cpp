#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int cnt = 0;
	    while (n) {
	        ++cnt;
	        n &= (n-1);
	    }
	    cout << cnt << endl;
	}
	return 0;
}

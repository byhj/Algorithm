#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int val = n;
	    int cnt = 0;
	    while (val) {
	       ++cnt;
	       val /= 2;
	    }
	    int flip = (1 << cnt) - 1;
	    cout << flip - n << " " << flip << endl;
	}
	return 0;
}

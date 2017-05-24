#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int orx = 0;
	    int val = 0;
	    while (n--) {
	        cin >> val;
	        orx ^= val;
	    }
	    cout << orx << endl;
	}
	return 0;
}

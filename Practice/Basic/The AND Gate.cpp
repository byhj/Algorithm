#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int val;
	    bool isAnd = true;
	    while (n--) {
	        cin >> val;
	        if (val == 0) isAnd = false;
	    }
	    cout << isAnd << endl;
	}
	return 0;
}

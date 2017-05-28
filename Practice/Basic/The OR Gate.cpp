#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int bit;
	    bool isAllZero = false;
	    while (n--) {
	        cin >> bit;
	        if (bit & 1) isAllZero = true;
	    }
	    cout << isAllZero << endl;
	}
	return 0;
}

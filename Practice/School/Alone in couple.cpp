#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int alone = 0;
	    int val;
	    while (n--) {
	        cin >>val;
	        alone ^= val;
	    }
	    cout << alone << endl;
	}
	return 0;
}

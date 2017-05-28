#include <iostream>
using namespace std;

int main() {
	int t, n, target;
	cin >> t;
	while (t--) {
	    cin >> n >> target;
	    int val;
	    int cnt = 0;
	    while (n--) {
	        cin >> val;
	        if (val == target) {
	            ++cnt;
	        }
	    }
	    cout << (cnt ? cnt : -1) << endl;
	}
	return 0;
}

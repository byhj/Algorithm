#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int n;
	    cin >> n;
	    int val, sum = 0;
	    while (n--) {
	        cin >> val;
	        sum += val;
	    }
	    cout << sum << endl;
	}
	return 0;
}

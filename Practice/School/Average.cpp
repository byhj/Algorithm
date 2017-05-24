#include <iostream>
using namespace std;

int main() {
	int t, n, val;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int sum = 0;
	    for (int i = 1; i <= n; ++i) {
	        cin >> val;
	        sum += val;
	        cout << sum / i << " ";
	    }
	    cout << endl;
	}
	return 0;
}

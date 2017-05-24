#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	     cin >> n;
	     int val;
	     int mean = 0;
	     for (int i = 0; i < n; ++i) {
	         cin >> val;
	         mean += val;
	     }
	     mean /= n;
	     cout << mean << endl;
	}
	return 0;
}

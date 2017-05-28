#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t, n;
	cin >> t; 
	while (t--) {
	    cin >> n;
	    int sum = 0;
	    for (int x = 1; x <= n; ++x) {
	        int y = floor(n/x);
	        sum += y * x;
	    }
	    cout << sum << endl;
	}
	return 0;
}

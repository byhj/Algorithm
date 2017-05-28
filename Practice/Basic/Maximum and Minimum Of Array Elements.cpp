#include <iostream>
#include <climits>
#include <algorithm>

using namespace std;

int main() {
	int t, n, val;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int minVal = INT_MAX, maxVal = INT_MIN;
	    while (n--) {
	        cin >> val;
	        minVal = min(minVal, val);
	        maxVal = max(maxVal, val);
	    }
	    cout << maxVal << " " << minVal;
	    cout << endl;
	}
	return 0;
}

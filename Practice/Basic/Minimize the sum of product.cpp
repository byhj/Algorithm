#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> va(n), vb(n);
	    for (int i = 0; i < n; ++i) {
	        cin >> va[i];
	    }
	    for (int i = 0; i < n; ++i) {
	        cin >> vb[i];
	    }
	    sort(va.begin(), va.end());
	    sort(vb.begin(), vb.end(), greater<int>());
	    int sum = 0;
	    for (int i = 0; i < n; ++i) {
	        sum += va[i] * vb[i];
	    }
	    cout << sum << endl;
	}
	return 0;
}

#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
	int t, n, k;
	cin >> t;
	while (t--) {
	    cin >> n >> k;
	    vector<int> va(n), vb(n);
	    for (int i = 0; i < n; ++i) {
	        cin >> va[i];
	    }
	    for (int i = 0; i < n; ++i) {
	        cin >> vb[i];
	    }
	    sort(va.begin(), va.end());
	    sort(vb.begin(), vb.end(), greater<int>());
	    bool isSat = true;
	    for (int i = 0; i < n; ++i) {
	        if (va[i] + vb[i] < k) {
	            isSat = false;
	            break;
	        }
	    }
	    cout << isSat << endl;
	}
	return 0;
}

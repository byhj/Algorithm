#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n);
	    for (int i = 0; i < n; ++i) {
	        cin >> vec[i];
	    }
	    sort(vec.begin(), vec.end());
	    int sz = vec.size();
	    if (sz % 2 == 1) cout << vec[sz/2] << endl;
	    else cout << (vec[sz/2] + vec[sz/2-1])/2 << endl;
	}
	return 0;
}

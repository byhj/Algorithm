#include <iostream>
#include <vector>
#include <climits>
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
	    
	    int ans = INT_MAX;
	    for (int i = 0; i < n-1; ++i) {
	        ans = min(ans, vec[i+1] - vec[i]);
	    }
	    cout << ans << endl;
	}
	return 0;
}

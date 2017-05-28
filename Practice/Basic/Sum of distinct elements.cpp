#include <iostream>
#include <unordered_set>
#include <algorithm>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    unordered_set<int> numSet;
	    int val;
	    int ans = 0;
	    while (n--) {
	        cin >> val;
	        if (numSet.find(val) == numSet.end()) {
	            ans += val;
	            numSet.insert(val);
	        }
	    }
	    cout << ans << endl;
	}
	
	return 0;
}

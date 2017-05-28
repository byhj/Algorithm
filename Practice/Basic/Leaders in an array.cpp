#include <iostream>
#include <climits>
#include <vector>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n);
	    for (int i = 0; i < n; ++i) cin >> vec[i];
	    int maxVal = INT_MIN;
	    vector<int> ans;
	    for (int i = n-1; i >= 0; --i) {
	        if (vec[i] > maxVal) {
	           ans.push_back(vec[i]);
	           maxVal = vec[i];
	        }
	    }
	    for (int i = ans.size()-1; i >= 0; --i) {
	        cout << ans[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}

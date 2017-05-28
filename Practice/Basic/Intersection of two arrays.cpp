#include <iostream>
#include <unordered_set>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t, na, nb, val;
	cin >> t;
	while (cin >> na >> nb) {
	    unordered_set<int> numSet;
	    vector<int> ans;
	    while (na--) {
	        cin >> val;
	        numSet.insert(val);
	    }
	    while (nb--) {
	        cin >> val;
	        if (numSet.find(val) != numSet.end()) {
	            ans.push_back(val);
	        }
	    }
	    if (ans.empty()) cout << "Zero";
	    else {
	        sort(ans.begin(), ans.end());
	        for (auto val: ans) {
	            cout << val << " ";
	        }
	    }
	    cout << endl;
	}
	return 0;
}

#include <iostream>
#include <set>

using namespace std;

int main() {
	int t, n, m, val;
	cin >> t;
	while (t--) {
	    cin >> n >> m;
	    set<int> unionSet;
	    int i = 0;
	    while (i++ < n+m) {
	        cin >> val;
	        unionSet.insert(val);
	    }
	    for (auto val : unionSet) {
	        cout << val << " ";
	    }
	    cout << endl;
	}
	return 0;
}

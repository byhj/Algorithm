#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int t, a, b;
	cin >> t;
	while (t--) {
	    cin >> a >> b;
	    vector<int> ans;
	    for (int i = ceil(cbrt(a)); i <= floor(cbrt(b)); ++i) {
	            ans.push_back(i*i*i);
	    }
	    if (ans.empty()) cout << "No";
	    else {
	        for (auto val : ans) cout << val << " ";
	    }
	    cout << endl;
	}
	return 0;
}

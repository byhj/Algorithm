#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t, n, target;
	cin >> t;
	while (t--) {
	    cin >> n >> target;
	    int ans = -1;
	    vector<int> vec(n);
	    for (int i = 0; i < n; ++i) {
             cin >> vec[i];
	    }
	    auto iter = find(vec.begin(), vec.end(), target);
	    cout << (iter != vec.end() ? iter - vec.begin()+1 : -1 ) << endl;
	}
	return 0;
}

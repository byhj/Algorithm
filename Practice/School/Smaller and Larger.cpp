#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t, n, x;
	cin >> t;
	while (t--) {
	    cin >> n >> x;
	    vector<int> vec(n);
	    for (int i = 0; i < n; ++i) cin >> vec[i];
	    auto up = upper_bound(vec.begin(), vec.end(), x);
	    cout << up - vec.begin() << " ";
	    auto equ = equal_range(vec.begin(), vec.end(), x);
	    cout << vec.end() - equ.first << endl;
	}
	return 0;
}

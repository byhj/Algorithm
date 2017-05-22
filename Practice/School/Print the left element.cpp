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
	    cout << (n%2 ? vec[n/2] : vec[n/2-1]) << endl;
	}
	return 0;
}

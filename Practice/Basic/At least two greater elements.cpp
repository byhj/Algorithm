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
	    for (int i = 0; i < n-2; ++i) {
	        cout << vec[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}

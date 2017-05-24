#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n);
	    for (int i = 0; i < n; ++i) {
	        cin >> vec[i];
	        cout << (vec[i] ? 0 : 1) << " ";
	    }
	    cout << endl;
	}
	return 0;
}

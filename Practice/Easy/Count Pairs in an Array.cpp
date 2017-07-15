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
	    }
	    int cnt = 0;
	    for (int i = 0; i < n-1; ++i) {
	        for (int j = i+1; j < n; ++j) {
	            if (i * vec[i] > j * vec[j])
	               ++cnt;
	        }
	    }
	    cout << cnt << endl;
	}
	return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int cnt = 0;
	    for (int i = 1; i < n-1; ++i) {
	        for (int j = i+1; j < n; ++j) {
	            if (i + j <= n)
	               ++cnt;
	        }
	    }
	    cout << cnt << endl;
	}
	return 0;
}

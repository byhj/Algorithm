#include <vector>
#include <iostream>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n+1, 1);
	    for (int i = 2; i*i <= n; ++i) {
	        if (vec[i] == 0) continue;
	        for (int j = 2*i; j <= n; j += i) {
	            vec[j] = 0;
	        }
	    }
	    for (int i = 2; i <= n; ++i) {
	        if (vec[i]) {
	            cout << i << " ";
	        }
	    }
	    cout << endl;
	}
	return 0;
}

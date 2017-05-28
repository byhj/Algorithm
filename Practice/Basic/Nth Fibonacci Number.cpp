#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n+1);
	    vec[1] = 0; vec[2] = 1;
	    for (int i = 3; i <= n; ++i) {
	        vec[i] = (vec[i-1] + vec[i-2]) % 1000000007;
	    }
	    cout << vec[n] << endl;
	}
	return 0; 
}

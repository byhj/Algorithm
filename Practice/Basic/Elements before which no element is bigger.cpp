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
	    int cnt = 1;
	    int maxVal = vec[0];
	    for (int i = 1; i < n; ++i) {
	        if (vec[i] > maxVal) {
	            ++cnt;
	            maxVal = vec[i];
	        }
	    }
	    cout << cnt << endl;
	    
	    
	}
	return 0;
}

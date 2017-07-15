#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> numCnt(1001, 0);
	    vector<int> vec(n);
	    int cnt = 0;
	    for (int i = 0; i < n; ++i) {
	        cin >> vec[i];
	        if (++numCnt[vec[i]] >= 2) {
	            numCnt[vec[i]] -= 2;
	            cnt += 2;
	        }
	    }
	    cout << cnt << endl;
	}
	return 0;
}

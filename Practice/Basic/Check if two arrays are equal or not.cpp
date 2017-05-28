#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> va(n), vb(n);
	    vector<int> cntVec(1001, 0);
	    for (int i = 0; i < n; ++i) {
	        cin >> va[i];
	        ++cntVec[va[i]];
	    }
	    for (int i = 0; i < n; ++i) {
	        cin >> vb[i];
	        --cntVec[vb[i]];
	    }
	    bool isSame = true;
	    for (int i = 0; i < n; ++i) {
	        if (cntVec[va[i]] != 0) {
	            isSame = false;
	            break;
	        }
	    }
	    cout << isSame << endl;
	}
	return 0;
}
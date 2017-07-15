#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n), temp;
	    for (int i = 0; i < n; ++i) {
	        cin >> vec[i];
	    }
	    bool isBST = true;
       	for (int i = 0; i < n-1; ++i) {
	        if (vec[i] >= vec[i+1]) {
	            isBST =false;
	            break;
	        }
       	}
	    cout << isBST << endl;
	}
	return 0;
}

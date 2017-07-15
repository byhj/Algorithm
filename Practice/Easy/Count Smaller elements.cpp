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
	    vector<int> smallVec(n);
	    for (int i = n-1; i >= 0; --i) {
	        for (int j = i+1; j < n; ++j) {
	            if (vec[j] < vec[i]) 
	               ++smallVec[i];
	        }
	    }
	    for (auto val : smallVec) {
	        cout << val << " ";
	    }
	    cout << endl;
	}
	return 0;
}

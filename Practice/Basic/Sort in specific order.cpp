#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> oddVec, evenVec;
	    int val;
	    for (int i = 0; i < n; ++i) {
	        cin >> val;
	        if (val % 2 == 0) evenVec.push_back(val);
	        else oddVec.push_back(val);
	    }
	    sort(evenVec.begin(), evenVec.end());
	    sort(oddVec.begin(), oddVec.end(), greater<int>());
	    for (auto val : oddVec) {
	        cout << val << " "; 
	    }
	    for (auto val : evenVec) {
	        cout << val << " ";
	    }
	    cout << endl;
	}
	return 0;
}

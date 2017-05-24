#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> divVec;
	    int sq = sqrt(n);
	    divVec.push_back(1);
	    for (int i = 2; i <= sq ; ++i) {
	        if (n % i == 0) {
	            if (i * i == n) {
	               divVec.push_back(i);
	            }else {
	               divVec.push_back(i);
	               divVec.push_back(n/i);
	            }
	        }
	    }
	    int orx = 0;
	    sort(divVec.begin(), divVec.end());
	    for (int i = 0; i < divVec.size(); ++i) {
	        cout << divVec[i] << " ";
	        orx ^= divVec[i];
	    }
	    cout << endl;
	    cout << orx << endl;
	}
	return 0;
}

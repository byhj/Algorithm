#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<vector<int>> vec(n, vector<int>(n, 0));
	    for (int i = 0; i < n; ++i) {
	        for (int j = 0; j < n; ++j) {
	            cin >> vec[i][j];
	        }
	    }
	    int sum1 = 0, sum2 = 0;
	    for (int i = 0; i < n; ++i) {
	        sum1 += vec[i][i];
	        sum2 += vec[i][n-i-1];
	    }
	    cout << abs(sum1-sum2) << endl;
	}
	return 0;
}

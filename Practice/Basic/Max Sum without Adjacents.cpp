#include <iostream>
#include <cmath>
#include <vector>

using namespace std;

int maxSum(vector<int> vec) {
    
    //include current element or not
    int incl = vec[0];
    int excl = 0;
    for (int i = 1; i < vec.size(); ++i) {
        int t = max(excl, incl);
        incl = (excl + vec[i]);
        excl = t;
    }
    return max(incl, excl);
}
int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n);
	    for (int i = 0; i < n; ++i) cin >> vec[i];
	    cout << maxSum(vec) << endl;
	}
	return 0;
}

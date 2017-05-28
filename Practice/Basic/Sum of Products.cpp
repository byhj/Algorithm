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
	    int sum = 0;
	    for (int i = 0; i <= vec.size()-2; ++i) {
	        for (int j = i+1; j <= vec.size()-1; ++j) {
	            sum += (vec[i] & vec[j]);
	        }
	    }
	    cout << sum << endl;
	}
	return 0;
}

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
	int t, n, k;
	cin >> t;
	while (t--) {
	    cin >> n >> k;
	    vector<int> vec(n);
	    for (int i = 0; i < n; ++i) {
	        cin >> vec[i];
	    }
	    partial_sort(vec.begin(), vec.begin()+k, vec.end(), std::greater<int>());
        for (int i = 0; i < k; ++i) {
            cout << vec[i] << " ";
        }
        cout << endl;
	}
	return 0;
}

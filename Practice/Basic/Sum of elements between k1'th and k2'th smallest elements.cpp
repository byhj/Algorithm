#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>

using namespace std;

int main() {
	int t, n, k1, k2;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> vec(n);
		for (int i = 0; i < n; ++i) {
			cin >> vec[i];
		}
		sort(vec.begin(), vec.end());
		int sum = 0;
		cin >> k1 >> k2;
		for (int i = k1; i < k2 - 1; ++i) {
			sum += vec[i];
		}
		cout << sum << endl;

	}
	return 0;
}

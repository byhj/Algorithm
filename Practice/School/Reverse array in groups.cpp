#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t, n, k;
	cin >> t;
	while (t--) {
		cin >> n;
		vector<int> vec(n);
		for (int i = 0; i < n; ++i) {
			cin >> vec[i];
		}
		cin >> k;
		for (int i = 0; i < n; i += k) {
		    int left = i;
		    //for not enough k element at last
		    int right = min(i+k-1, n-1);
		    while (left < right) {
		        swap(vec[left++], vec[right--]);
		    }
		}
		for (int i = 0; i < n; ++i) {
		    cout << vec[i] << " ";
		}
		cout << endl;
	}
	return 0;
}

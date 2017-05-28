#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n, val;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec;
        for (int i = 1; i <= n; ++i) {
            cin >> val;
            if (val == i) {
                vec.push_back(val);
            }
        }
        if (vec.empty()) {
            cout << "Not Found";
        }else {
            for (auto val : vec) {
                cout << val << " ";
            }
        }
        cout << endl;
	}
	return 0;
}

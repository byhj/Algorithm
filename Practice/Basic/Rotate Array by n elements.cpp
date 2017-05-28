#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int t, n, d;
    cin >> t;
    while (t--) {
        cin >> n >> d;
        vector<int> vec(n);
        for (int i = 0; i < n; ++i) {
            cin >> vec[i];
        }
        rotate(vec.begin(), vec.begin() + d, vec.end());
        for (auto val : vec)  {
            cout << val << " ";
        }
        cout << endl;
    }
	return 0;
}

#include <iostream>
#include <algorithm>

using namespace std;

int main() {
	int t, n;
	int beg, end;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n);
	    for (int i = 0; i < n; ++i) {
	        cin >> vec[i];
	    }
        cin >> beg >> end;
        reverse(vec.begin() + beg-1, vec.begin()+end);
        for (auto val : vec) {
            cout << val << " ";
        }
        cout << endl;
	}
	return 0;


#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    for (int i = 1; i <= n; ++i) {
	        string str = to_string(i);
	        for (int j = i-1; j >= 1; --j) {
	            str = to_string(j) + str + to_string(j);
	        }
	        cout << str << " ";
	    }
	    cout << endl;
	}
	return 0;
}

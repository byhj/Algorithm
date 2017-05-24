#include <iostream>
#include <string>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    for (int i = 0; i < n; ++i) {
	        cout << string(i, ' ') << string((n-i)*2-1 , '*') << string(i, ' ');
	    }
	    cout << endl;
	}
	return 0;
}

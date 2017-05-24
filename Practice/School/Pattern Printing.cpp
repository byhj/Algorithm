#include <iostream>
#include <string>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    for (int i = 1; i <= n; ++i) {
	        string str(i, '*');
	        cout << str << " ";
	    }
	    cout << endl;
	}
	return 0;
}

#include <iostream>

using namespace std;

int main() {
	int t, n, e;
	cin >> t;
	while (t--) {
	    cin >> n >> e;
	    int v1, v2;
	    for (int i = 0; i < e; ++i) {
	        cin >> v1 >> v2;
	    }
	    cout << e << endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t; 
	while (t--) {
	    cin >> n;
	    int cnt = 0;
	    for (int i = 3; i <= n; i += 3) {
	        if (n % i == 0) ++cnt;
	    }
	    cout << cnt << endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int n, a, b;
	cin >> n;
	while (n--) {
	    cin >> a >> b;
	    long long ans = 1;
	    for (int i = a-b+1; i <= a; ++i) {
	        ans *= i;
	    }
	    cout << ans << endl;
	}
	return 0;
}

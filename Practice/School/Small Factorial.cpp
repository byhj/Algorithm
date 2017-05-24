#include <iostream>
using namespace std;

int main() {
	int n, val;
	cin >> n;
	while (n--) {
	    cin >> val;
	    long long ans = 1;
	    for (int i = 1; i <= val; ++i)  {
	        ans *= i;
	    }
	    cout << ans << endl;
	}
	return 0;
}

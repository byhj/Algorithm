#include <iostream>
#include <cmath>

using namespace std;

bool isOddDiv(int n) {
    int t = sqrt(n);
    return t*t == n;
}

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int ans = 0;
	    for (int i = 1; i <= n; ++i)
	      if(isOddDiv(i))
	        ++ans;
	   cout << ans << endl;
	}
	return 0;
}

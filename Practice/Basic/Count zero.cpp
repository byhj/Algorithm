#include <iostream>
#include <cmath>

using namespace std;

// Returns count of 'd' digit integers have 0 as a digit
long long findCount(int d)
{
    return 9*(pow(10,d-1) - pow(9,d-1));
}

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    long long ans = 0;
	    for (int i = 1; i <= n; ++i) 
	        ans += findCount(i);
	    cout << ans << endl;
	}
	return 0;
}

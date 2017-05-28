#include <iostream>
using namespace std;

//n &= n-1 is make the right most of n 1 to 0 
bool isPower(long long n) {
    return n > 0 ? (n &= n-1) == 0 : false;
}
int main() {
	long long t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    cout << (isPower(n) ? "YES" : "NO" ) << endl;
	}
	return 0;
}

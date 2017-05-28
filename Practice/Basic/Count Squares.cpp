#include <iostream>
#include <cmath>

using namespace std;

int main() {
	int t;
	long long n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    cout << (int)ceil(sqrt(n))-1 << endl;
	}
	return 0;
}

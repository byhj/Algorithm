#include <iostream>
using namespace std;

bool isPower(int a, int b) {
    if (a == 1) return b == 1;
    
    long long p = 1;
    while (p < b) {
        p *= a;
    }
    return p == b;
}
int main() {
	int t, a, b;
	cin >> t;
	while (t--) {
	    cin >> a >> b;
	    cout << isPower(a, b) << endl;
	}
	return 0;
}

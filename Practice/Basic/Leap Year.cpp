#include <iostream>
using namespace std;

bool isLeap(int n) {
    return (n % 4 == 0 && n % 100 != 0) || (n % 400 == 0);
}
int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    cout << (isLeap(n) ? "Yes" : "No") << endl;
	}
	return 0;
}

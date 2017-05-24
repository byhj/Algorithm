#include <iostream>
using namespace std;

int main() {
	int n, a, b, c;
	cin >> n;
	while (n--) {
	    cin >> a >> b >> c;
	    cout << max(a, max(b, c)) << endl;
	}
	return 0;
}

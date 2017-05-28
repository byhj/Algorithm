#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    unsigned v = 0x0000 | n;
	    cout << ~v << endl;
	}
	return 0;
}

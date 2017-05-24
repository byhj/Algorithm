#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    int a1, a2, a3;
	    int b1, b2, b3;
	    cin >> a1 >> a2 >> a3 >> b1 >> b2 >> b3;
	    int a = (a1*b1 + a2*b2 + a3*b3);
	    int b = (a2*b3 - a3*b2) * (a2*b3 - a3*b2)
	          + (a1*b3 - b1*a3) * (a1*b3 - b1*a3) 
	          + (a1*b2 - a2*b1) * (a1*b2 - a2*b1);
	    if (b == 0) cout << 1 << endl;
	    else if (a == 0) cout << 2 << endl;
	    else cout << 0 << endl;
	}
	return 0;
}

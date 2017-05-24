#include <iostream>
using namespace std;

int main() {
	int n;
	int a, b, c, d, e;
	cin >> n;
	while (n--) {
	    cin >> a >> b >> c >> d >> e;
	    cout << a*b  << " " << d*c/2 << " " << int(e*e*3.14) << endl;
	}
	return 0;
}

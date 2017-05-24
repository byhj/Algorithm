#include <iostream>
using namespace std;

int main() {
	int n, val;
	cin >> n;
	while (n--) {
	    cin >> val;
	    cout << (val%2 == 0 ? "even": "odd") << endl; 
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    //when n = 5, next people can not win 
	    cout << (n % 5 == 0 ? -1: n % 5) << endl;
	}
	return 0;


#include <iostream>
using namespace std;

int main() {
	int t, d;
	cin >> t;
	while (t--) {
	    cin >> d;
	    bool flag = (d % 6 == 0 || d %6 ==1 || d % 6 == 3);
	    cout << (flag ? "yes" :"no") << endl;
	}
	return 0;
}

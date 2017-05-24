#include <iostream>
using namespace std;

int main() {
	//code
	int n;
	int val;
	cin >> n;
	while (n--) {
	    cin >> val;
	    for (int i = 1; i <= 10; ++i)
	       cout << val *i << " ";
	    cout << endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

int main() {
	int n, nums, val;
	cin >> n;
	while (n--) {
	    cin >> nums;
	    while (nums--) {
	        cin >> val;
	        cout << val << " ";
	    }
	    cout << endl;
	}
	return 0;
}

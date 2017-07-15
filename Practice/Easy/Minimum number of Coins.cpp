#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	vector<int> coins = {1000, 500, 100, 50, 20, 10, 5, 2, 1};
	while (t--) {
	    cin >> n;
	    int pos = 0;
	    //every time we use largest number as we can
	    while (n) {
	        if (n >= coins[pos]) {
	            cout << coins[pos] << " ";
	            n -=coins[pos];
	        }else {
	            ++pos;
	        }
	    }
	    cout << endl;
	}
	return 0;
}

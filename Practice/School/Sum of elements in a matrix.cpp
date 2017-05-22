#include <iostream>
using namespace std;

int main() {
	int ca;
	cin >> ca;
    while (ca--) {
	   int sum = 0;
	   int n, m;
	   cin >> n >> m;
	   for (int i = 0; i < n; ++i) {
	       for (int j = 0; j < m; ++j) {
	         int val;
	         cin >> val;
	         sum += val;
	        }
	   }
	   cout << sum << endl;
	}
	return 0;
}

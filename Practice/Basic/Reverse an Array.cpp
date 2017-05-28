#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n);
	    for (int i = 0; i < n; ++i)
	       cin >> vec[i];
	   
	   for (int  i = n-1; i >= 0; --i) {
	       cout << vec[i] << " ";
	   }
	   cout << endl;
	}
	return 0;
}

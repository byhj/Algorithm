#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n, val;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n+1, 0);
	    while (n--) {
	        cin >> val;
	        ++vec[val];
	    }
	    for (int i = 1; i < vec.size(); ++i) 
	       cout << vec[i] << " ";
	   cout << endl;
	}
	return 0;
}

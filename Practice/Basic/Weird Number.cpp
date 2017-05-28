#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main() {
    vector<int> weirds = {70, 836, 4030, 5830, 7192, 7912, 9272};
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	   if ( find(weirds.begin(), weirds.end(), n) != weirds.end() ) {
	       cout << "Weird" << endl;
	   }else {
	       cout << "Not Weird" << endl;
	   }
	}
	return 0;
}

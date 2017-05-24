#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	     cin >> n;
	     int val;
	     unordered_set<int> intSet;
	     bool isGirl = true;
	     for (int i = 0; i < n; ++i) {
	         cin >> val;
	         if (intSet.find(val) == intSet.end()) {
	             intSet.insert(val);
	         }else {
	             isGirl = false;
	         }
	     }
	     cout << (isGirl ? "GIRLS" : "BOYS") << endl;
	}
	return 0;
}

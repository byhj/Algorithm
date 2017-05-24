#include <iostream>
#include <unordered_set>

using namespace std;

int main() {
	int t;
	int n, p;
	int val;
	cin >> t;
	
	while (t--) {
	    unordered_set<int> numSet;
	    cin >> n >> p;
	    while (n--){
	       cin >> val;
	       numSet.insert(val);
	    }
	    bool flag = false;
	    for (auto iter = numSet.begin(); iter != numSet.end(); ++iter) {
	        if (p % *iter == 0) {
	          if (numSet.find(p / *iter) != numSet.end()) {
	             flag = true;
	             break;
	          }
	        }
	    }
	    cout << (flag ? "Yes" : "No") << endl;
	}
	return 0;
}

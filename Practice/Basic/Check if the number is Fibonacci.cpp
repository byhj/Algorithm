#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	
	vector<int> vec(101);
	vec[1] = 1;
	unordered_set<int> facSet;
	facSet.insert(0);
	for (int i = 2; i < 101; ++i) {
	    vec[i] = vec[i-1] + vec[i-2];
	    if (vec[i] > 100) break;
	    facSet.insert(vec[i]);
	}

	while (t--) {
	    cin >> n;
	    cout << (facSet.find(n) != facSet.end() ? "Yes" : "No") << endl;
	}
	return 0;
}

#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    vector<int> vec(26, 0);
	    string str;
	    cin >> str;
	    for (auto ch : str) {
	        ++vec[ch-'a'];
	    }
	    int cnt = 0;
	    for (auto val : vec) {
	        if (val > 0) ++cnt;
	    }
	    cout << (cnt >= 4) << endl;
	}
	return 0;
}

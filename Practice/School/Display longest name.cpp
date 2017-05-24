#include <iostream>
#include <string>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    string str;
	    int sz = 0;
	    string ans;
	    while (n--) {
	        cin >> str;
	        if (str.size() > sz) {
	            ans = str;
	            sz = str.size();
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}

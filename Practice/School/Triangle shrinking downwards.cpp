#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    string str;
	    cin >> str;
	    int sz = str.size();
	    for (int i = 0; i < sz; ++i) {
	        cout << string(i, '.') << str.substr(i, sz-i) << endl;
	    }
	}
	return 0;
}

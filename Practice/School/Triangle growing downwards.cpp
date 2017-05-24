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
	    for (int i = sz-1; i >= 0; --i) {
	        cout << string(i, '.') << str.substr(0, sz-i) << endl;
	    }
	}
	return 0;
}

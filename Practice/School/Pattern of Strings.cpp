#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    string str;
	    cin >> str;
	    for (int len = str.size(); len > 0; --len) {
	        cout << str.substr(0, len) << endl;
	    }
	}
	return 0;
}

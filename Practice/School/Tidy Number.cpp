#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    string str;
	    cin >> str;
	    string temp = str;
	    sort(str.begin(), str.end());
	    cout << (str==temp ? 1 : 0) << endl;
	}
	return 0;
}

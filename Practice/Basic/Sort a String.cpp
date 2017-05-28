#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    string str;
	    cin >> str;
	    sort(str.begin(), str.end());
        cout << str << endl;
	}
	return 0;
}

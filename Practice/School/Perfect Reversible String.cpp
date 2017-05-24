#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	cin >> n;
	while (n--) {
	    string str;
	    cin >> m >> str;
	    string rev = str;
	    reverse(rev.begin(), rev.end());
	    cout << (str.find(rev) != string::npos) << endl;
	}
	return 0;
}

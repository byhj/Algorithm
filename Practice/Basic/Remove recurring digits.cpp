#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	string str;
	cin >> t;
	while (t--) {
	    cin >> str;
	    int cur = 0;
	    for (int i = 0; i < str.size(); ++i) {
	        str[cur++] = str[i];
	        while (i+1 < str.size() && str[i] == str[i+1])  ++i;
	    }
	    cout << str.substr(0, cur) << endl;
	}
	return 0;
}

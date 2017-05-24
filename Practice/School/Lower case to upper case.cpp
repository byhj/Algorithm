#include <iostream>
#include <cctype>
#include <string>
#include <algorithm>

using namespace std;


int main() {
	int t;
	cin >> t;
	while (t--) {
	    string str;
	    cin >> str;
	    for (auto &ch : str) {
	        ch = toupper(ch);
	    }
	    cout << str << endl;
	}
	return 0;
}

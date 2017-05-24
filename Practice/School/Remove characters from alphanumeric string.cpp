#include <iostream>
#include <iomanip>

using namespace std;

int main() {
    int t;
	string str;
	cin >> t;
	while (t--) {
	    cin >> str;
	    for (auto ch : str) {
	        if (isdigit(ch))
	          cout << ch;
	    }
	    cout << endl;
	}
	return 0;
}

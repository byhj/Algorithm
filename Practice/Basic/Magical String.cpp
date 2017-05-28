#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    string str;
	    cin >> str;
	    for (char ch : str) {
	        cout << char(26-(ch-'a') + 'a'-1);
	    }
	    cout << endl;
	}
	return 0;
}

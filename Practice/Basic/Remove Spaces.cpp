#include <iostream>
#include <sstream>
#include <string>

using namespace std;

int main() {
	int t;
	string str;
	cin >> t;
	getchar();
	while (t--) {
	    string ans;
	    getline(cin, str);
        for (auto ch : str) {
            if (isalpha(ch)) {
                ans += ch;
            }
        }
	    cout << ans << endl;
	}
	return 0;
}

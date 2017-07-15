#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    string str;
	    cin >> str;
	    int sum = 0;
	    for (char ch : str) {
	        sum = sum * 26 + (ch-'A'+1);
	    }
	    cout << sum << endl;
	}
	return 0;
}

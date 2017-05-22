#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
	    string  str;
	    cin >> str;
	    int cnt = 0;
	    for (int i = 0; i < str.size(); ++i) {
	        if (isupper(str[i])) {
	            ++cnt;
	        }
	    }
	    cout << cnt << endl;
	}
	return 0;
}

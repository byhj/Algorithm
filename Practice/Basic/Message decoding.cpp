#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string str;
		cin >> str;
		string st = "hello";
		int i = 0, j = 0;
		while (true) {
			while (i < str.size() && str[i] != st[j]) ++i;
			if (i >= str.size()) break;
			if (++j >= st.size()) break;
			++i;
		}
		cout << (j >= st.size()) << endl;
	}
	return 0;
}

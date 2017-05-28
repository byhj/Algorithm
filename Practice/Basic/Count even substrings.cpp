#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
		string str;
		cin >> str;
		int cnt = 0;
		for (int i = 0; i < str.size(); ++i) {
			for (int j = 1; j <= str.size() - i; ++j) {
				string sub = str.substr(i, j);
				if ((sub[sub.size()-1]-'0') % 2 == 0) ++cnt;
			}
		}
		cout << cnt << endl;
	}
	return 0;
}

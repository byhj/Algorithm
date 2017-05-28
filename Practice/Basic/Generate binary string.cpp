#include <iostream>
#include <string>
#include <vector>

using namespace std;

void dfs(vector<string> &ans, string str, int beg)
{
	if (beg == str.size()) {
		ans.push_back(str);
		return;
	}
	if (str[beg] == '?') {
		str[beg] = '0';
		dfs(ans, str, beg + 1);
		str[beg] = '1';
		dfs(ans, str, beg + 1);
	}
	else {
		dfs(ans, str, beg + 1);
	}
}
int main() {
	int t;
	cin >> t;
	while (t--) {
		string str;
		cin >> str;
		vector<string> ans;
		dfs(ans, str, 0);
		for (auto str : ans) {
			cout << str << " ";
		}
		cout << endl;
	}
	return 0;
}

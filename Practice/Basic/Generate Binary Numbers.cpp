#include <iostream>
#include <string>
#include <queue>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		queue<string> que;
		que.push("1");
		int cnt = 0;
		while (!que.empty()) {
			string str = que.front();
			que.pop();
			if (++cnt > n) break;
			cout << str << " ";
			que.push(str + '0');
			que.push(str + '1');
		}
		cout << endl;
	}
	return 0;
}

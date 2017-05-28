#include <iostream>
#include <string>

using namespace std;

int digPow(string str)
{
	int sum = 0;
	for (int i = 0; i < str.size(); ++i) {
		int val = str[i] - '0';
		int t = val;
		for (int j = 0; j < i; ++j) {
			t *= val;
		}
		sum += t;
	}
	return sum;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
		string str;
		cin >> str;
		cout << (stoi(str) == digPow(str)) << endl;
	}
	return 0;
}

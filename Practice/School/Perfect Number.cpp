#include <iostream>
#include <vector>

using namespace std;

vector<int> vec(10002, 1);

int fac(int n) {
	if (n <= 1) return 1;
	if (vec[n] != 1) return vec[n];
	else {
		for (int i = 2; i <= n; ++i) {
			vec[i] = vec[i - 1] * i;
		}
		return vec[n];
	}
}

int sumFac(int n) {
	int sum = 0;
	while (n) {
		int f = fac(n % 10);
		sum += f;
		n /= 10;
	}
	return sum;
}
int main() {
	int t, n;
	cin >> t;
	while (t--) {
		cin >> n;
		cout << (n == sumFac(n) ? "Perfect" : "Not Perfect") << endl;
	}
	return 0;
}

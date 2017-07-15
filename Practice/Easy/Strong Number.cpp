#include <iostream>
#include <vector>

using namespace std;

int fac(int n)
{
    int ans = 1;
    for (int i = 1; i <= n; ++i) {
        ans *= i;
    }
    return ans;
}
int sumFac(int n)
{
    int sum = 0;
    while (n) {
        sum += fac(n % 10);
        n /= 10;
    }
    return sum;
}

int main() {
	int t,  n;
	cin >> t;
	while (t--) {
	     cin >> n;
	     cout << (n == sumFac(n) ? "Strong" : "Not Strong") << endl;
	}
	return 0;
}

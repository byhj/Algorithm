#include <iostream>
#include <vector>

using namespace std;

bool isPrime(int n) {
	if (n < 2) return false;

	for (int i = 2; i*i <= n; ++i) {
		if (n % i == 0) {
			return false;
		}
	}
	return true;
}

int main() {
	int t, n;
	cin >> t;
	vector<int> primes;
	for (int i = 2; i < 1000; ++i) {
		if ( isPrime(i) )
		  primes.push_back(i);
	}
	while (t--) {
		cin >> n;
		for (int i = 0; i < primes.size(); ++i) {
			for (int j = 0; j < primes.size(); ++j) {
				if (primes[i] * primes[j] <= n)
					cout << primes[i] << " " << primes[j] << " ";
			}
		}
		cout << endl;
	}
	return 0;
}

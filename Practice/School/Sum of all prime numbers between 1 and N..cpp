#include <iostream>
#include <vector>

using namespace std;

vector<int>  primes(1000002, 1);

void genPrime(int n)
{
    for (int i = 2; i*i <= n; ++i) {
        if (primes[i] == 0) continue;
        for (int j = i*i; j <= n; j += i) {
            primes[j] = 0;
        }
    }
}
int main() {
	int t, n;
	cin >> t;
	genPrime(1000002);
	while (t--) {
	    cin >> n;
	    long sum = 0;
	    for (int i = 2; i <= n; ++i) {
	        if (primes[i] == 1)
	           sum += i;
	    }
	    cout << sum << endl;
	}
	return 0;
}

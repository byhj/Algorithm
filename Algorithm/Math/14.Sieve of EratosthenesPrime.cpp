

void genPrime(vector<int> &primes, int n)
{
	primes.resize(n+1, 1);
	for (int p = 2; p*p <= n; +p) {
		if (primes[p] == 1) {
			for (int i = p*2; i <= n; i += p) {
				primes[i] = false;
			}
		}
	}
} 

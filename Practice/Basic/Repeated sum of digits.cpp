#include <iostream>
using namespace std;

int digSum(int n)
{
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    while (n >= 10) {
	        n = digSum(n);
	    }
	    cout << n << endl;
	}
	return 0;
}

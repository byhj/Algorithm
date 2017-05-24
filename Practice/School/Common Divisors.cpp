#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (a < b) swap(a, b);
    return b == 0 ? a :gcd(b, a % b);
}
int main() {
	int n;
	cin >> n;
	while (n--) {
	    int a, b;
	    cin >> a >> b;
	    int c = gcd(a, b);
	    int cnt = 0;
	    for (int i = 1; i <= c; ++i) {
	        if (a % i == 0 && b % i == 0) 
	           ++cnt;
	    }
	    cout << cnt << endl;
	}
	return 0;
}

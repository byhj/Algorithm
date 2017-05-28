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
	    cout << (n % digSum(n) == 0 ? "Yes":"No") << endl;
	}
	return 0;
}

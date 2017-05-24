#include <iostream>
using namespace std;

bool isSquare(int n){
    for (int i = 1; i <= n; ++i) {
        if (n % i == 0 && i*i == n) {
            return true;
        }
    }
    return false;
}
int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    cout << isSquare(n) << endl;
	}
	return 0;
}

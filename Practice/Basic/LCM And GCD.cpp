#include <iostream>
#include <cmath>

using namespace std;

int hcf(int a, int b) {
    int m = min(a, b);
    for (int i = m; i >= 1; --i) {
        if (a % i == 0 && b % i == 0) {
            return i;
        }
    }
    return 1;
}
int main() {
	int t, a, b;
	cin >> t;
	while (t--) {
	    cin >> a >> b;
	    int h = hcf(a, b);
	    cout << a*b/h << " " << h << endl;
	}
	return 0;
}

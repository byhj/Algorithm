#include <iostream>
#include <cmath>

using namespace std;

bool isArm(int n) {
    int t = n;
    int ans = 0;
    while (t) {
        ans += pow(t % 10, 3);
        t /= 10;
    }
    return ans == n;
}
int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    cout << (isArm(n) ? "Yes" : "No") << endl;
	}
	return 0;
}

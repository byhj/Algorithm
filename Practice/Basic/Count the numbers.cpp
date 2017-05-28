#include <iostream>
#include <vector>

using namespace std;

bool isUnique(int n)
{
    vector<int> vec(10, 0);
    while (n) {
        if (n % 10 > 5 || n % 10 == 0) return false;
        n /= 10;
    }
    return true;
}
int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int cnt = 0;
	    for (int i = 1; i <= n; ++i) {
	        if (isUnique(i)) {
	           ++cnt;
	        }
	    }
	    cout << cnt << endl;
	}
	return 0;
}

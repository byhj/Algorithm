#include <iostream>
#include <vector>

using namespace std;

bool isUnique(int n)
{
    vector<int> vec(10, 0);
    while (n) {
        if (++vec[n%10] > 1) return false;
        n /= 10;
    }
    return true;
}
int main() {
	int t, m ,n;
	cin >> t;
	while (t--) {
	    cin >> m >> n;
	    for (int i = m; i <= n; ++i) {
	        if (isUnique(i))
	           cout << i << " ";
	    }
	    cout << endl;
	}
	return 0;
}

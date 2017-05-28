#include <iostream>
#include <algorithm>

using namespace std;

int countZero(int n) {
    string str = to_string(n);
    auto iter = find(str.begin(), str.end(), '0');
    return iter != str.end();
}

//count num which has 0
int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int ans = 0;
	    for (int i = 1; i <= n; ++i) {
	        ans += countZero(i);
	    } 
	    cout << ans << endl;
	}
	return 0;
}

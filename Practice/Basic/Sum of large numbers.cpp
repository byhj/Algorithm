#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    string a, b;
	    cin >> a >> b;
	    int carry = 0;
	    string ans;
	    int i = a.size()-1, j = b.size()-1;
	    while (i >= 0 && j >= 0) {
	        int c = (a[i--]-'0') + (b[j--] - '0') + carry;
	        carry = c / 10;
	        c = c % 10;
	        ans += (c + '0');
	    }
	    while (i >= 0) {
	        int c = (a[i--]-'0') + carry;
	        carry = c / 10;
	        c = c % 10;
	        ans += (c + '0');
	    }
	    while (j >= 0) {
	        int c = (b[j--]-'0') + carry;
	        carry = c / 10;
	        c = c % 10;
	        ans += (c + '0');
	    }
	    if (carry == 1) ans += '1';
	    reverse(ans.begin(), ans.end());
	    cout << ans << endl;
	}
	return 0;
}

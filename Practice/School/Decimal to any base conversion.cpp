#include <iostream>
#include <string>

using namespace std;

int main() {
	int t, base, n;
	cin >> t;
	while (t--) {
	    string str;
	    cin >> base >> n;
	    while (n) {
	        char ch;
	        int t = n % base;
	        
	        if (t >= 10) ch = 'A' + t-10;
	        else ch = t + '0';
	        
	        str = ch + str;
	        n /= base;
	    }
	    cout << str << endl;
	}
	return 0;
}

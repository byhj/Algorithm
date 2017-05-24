#include <iostream>
#include <bitset>

using namespace std;

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        bitset<14> bit(n);
	    cout << bit << endl;
    }
	return 0;
}

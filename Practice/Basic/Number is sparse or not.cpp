#include <iostream>
using namespace std;

bool isSparse(int n) {
    return !( n & (n >> 1) );
}
int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        cout << isSparse(n) << endl;
    }
	return 0;
}

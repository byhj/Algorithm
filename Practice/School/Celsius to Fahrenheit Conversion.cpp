#include <iostream>
using namespace std;

int main() {
    int n, val;
    cin >> n;
    while (n--) {
        cin >> val;
        cout << val * 9/5 + 32 << endl;
    }
	return 0;
}

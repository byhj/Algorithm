#include <iostream>

using namespace std;

void printNum(int n, int val, int step)
{
    if (val <= 0) step = 5;
    cout << val << " ";
    if (val+step == n)  {
        cout << n << endl;
        return;
    }
    printNum(n, val+step, step);
}

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    printNum(n, n, -5);
	}
	return 0;
}

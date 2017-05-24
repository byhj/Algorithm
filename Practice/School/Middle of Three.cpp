#include <iostream>
using namespace std;

int midVal(int a, int b, int c) {
    if (a <= b)
       return (b <= c) ? b : max(a, c);
    else
       return (a <= c) ? a : max(b, c);
}

int main() {
	//code
	int t;
	int a, b, c;
	cin >> t;
	while (t--) {
	    cin >> a >> b >> c;
	    cout << midVal(a, b, c) << endl;
	}
	return 0; 
}

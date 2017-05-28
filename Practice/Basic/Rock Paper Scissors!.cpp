#include <iostream>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    char ch1, ch2;
	    cin >> ch1 >> ch2;
	    if (ch1 == ch2) cout << "DRAW";
	    else if ( (ch1 == 'R' && ch2 == 'S') || (ch1 == 'S' && ch2 == 'P')
	        || (ch1 == 'P' && ch2 == 'R') )
	        cout << "A";
	    else cout << "B";
	    
	    cout << endl;
	}
	return 0;
}

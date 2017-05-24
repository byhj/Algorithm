#include <iostream>
using namespace std;

void printVal(int beg, int end) {
    if (beg == end+1)
       return;
       
    cout << beg << " ";
    printVal(beg+1, end);
}
int main() {
	//code
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    printVal(1, n);
	    cout << endl;
	}
	
	return 0;
}

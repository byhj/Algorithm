#include <iostream>
#include <string>
using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    string str;
	    cin >> str;
	    int beg = 0;
	    int end = str.size()-1;
	    while (beg < end) {
	        swap(str[beg++], str[end--]);
	    }
	    cout << str << endl;
	}
	return 0;
}

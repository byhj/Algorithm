#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    string str;
	    cin >> str;
	    int wrongCnt = 0;
	    for (int i = 0; i < str.size(); ++i) {
	        if (i % 2 == 0 && str[i] == 'B') ++wrongCnt;
	        if (i % 2 == 1 && str[i] == 'R') ++wrongCnt; 
	    }
	    cout << wrongCnt << endl;
	}
	return 0;
}

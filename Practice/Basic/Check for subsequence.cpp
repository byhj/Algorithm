#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	    string str1, str2;
	    cin >> str1 >> str2;
        int beg1 = 0, beg2 = 0;
        bool isPattern = true;
        while (beg1 < str1.size()) {
            while (beg2 < str2.size() && str1[beg1] != str2[beg2]) {
                ++beg2;
            }
            if (beg2 < str2.size()) ++beg1;
            else {
                isPattern = false;
                break;
            }
        }
        cout << isPattern << endl;
	}
	return 0;
}

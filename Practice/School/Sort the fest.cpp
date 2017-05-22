#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

const int NUM = 5;
int main() {
	int n;
	cin >> n;
	while (n--) {
	    string str;
	    unordered_set<string> strSet;
	    for (int i = 0; i < NUM; ++i) {
	        cin >> str;
	        strSet.insert(str);
	    }
	    bool needChange = false;
	    for (int i = 0; i < NUM; ++i) {
	        cin >> str;
	        if (strSet.find(str) != strSet.end()) {
	            needChange = true;
	        }
	    }
	    cout << (needChange ? "CHANGE" : "BEHAPPY") << endl;
	}
	return 0;
}

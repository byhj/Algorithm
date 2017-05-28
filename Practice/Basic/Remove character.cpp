#include <iostream>
#include <string>
#include <unordered_set>

using namespace std;

int main() {
	int t;
	string s1, s2;
	cin >> t;
	while (t--) {
	    cin >> s1 >> s2;
	    unordered_set<char> chSet;
	    for (auto ch : s2) {
	        chSet.insert(ch);
	    }
	    string ans;
	    for (auto ch : s1) {
	        if (chSet.find(ch) == chSet.end()) {
	            ans += ch;
	        }
	    }
	    cout << ans << endl;
	}
	return 0;
}

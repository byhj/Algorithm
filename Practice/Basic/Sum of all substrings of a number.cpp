#include <iostream>
#include <string>

using namespace std;

int main() {
	int t;
	cin >> t;
	while (t--) {
	   string str;
	   cin >> str;
	   int sum = 0;
	   for (int pos = 0; pos < str.size(); ++pos) {
	       for (int len = 1; len <= str.size()-pos; ++len) {
	           string sub = str.substr(pos, len);
	           sum += stoi(sub);
	       }
	   }
	   cout << sum << endl;
	    
	}
	return 0;
}

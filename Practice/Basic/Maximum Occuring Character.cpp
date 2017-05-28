#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
	int t;
	string str;
	cin >> t;
	while (t--) {
	    cin >> str;
	    vector<int> vec(26, 0);
	    for (auto ch: str) {
	        ++vec[ch-'a'];
	    }
	    char ch = ' ';
	    int  times = 0;
	    for (int i = 0; i < 26; ++i) {
	        if (vec[i] > times) {
	            times = vec[i];
	            ch = char(i + 'a');  
	        }
	    }
	    cout << ch << endl;
	}
	return 0;
}

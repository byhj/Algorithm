#include <iostream>
#include <string>

using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
	    string pat, txt;
	    cin >> pat >> txt;
	    auto pos = txt.rfind(pat);
	    cout << (pos == string::npos ? -1 : pos+1) << endl;
	}
	return 0;
}

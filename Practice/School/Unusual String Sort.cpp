#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>

using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
	    string str;
	    cin >> str;
	    //separate the lower and upper char
	    string lowStr, upStr;
	    for (int i = 0; i < str.size(); ++i) {
	       if (islower(str[i])) lowStr += str[i];
	       else upStr += str[i];
	    }
	    sort(lowStr.begin(), lowStr.end());
	    sort(upStr.begin(), upStr.end());
	    int i = 0;
	    int j = 0;
	    string ans = "";
	    int cnt = 0;
	    while (i < lowStr.size() || j < upStr.size()) {
	        if (i == lowStr.size()) ans += upStr[j++];
	        else if (j == upStr.size())  ans += lowStr[i++];
	        else if (cnt++ % 2 == 0) ans += upStr[j++];
	        else ans += lowStr[i++];
	    }
	    cout << ans << endl;
	}
	return 0;
}

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

string rotateStr(string str, int pos)
{
    reverse(str.begin(), str.begin()+pos+1);
    reverse(str.begin()+pos+1, str.end());
    reverse(str.begin(), str.end());
    return str;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
	    string sa, sb;
	    cin >> sa >> sb;
	    if (sa == rotateStr(sb, 1) || sa == rotateStr(sb, sb.size()-3))
	       cout << 1 << endl;
	    else 
	       cout << 0 << endl;
	}
	return 0;
}

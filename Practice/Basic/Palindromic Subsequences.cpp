#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str)
{
    // Start from leftmost and rightmost corners of str
    int l = 0;
    int h = str.size() - 1;
 
    // Keep comparing characters while they are same
    while (h > l)
        if (str[l++] != str[h--])
            return false;
 
    return true;
}

int main() {
	int t;
	cin >> t;
	while (t--) {
	    string str;
	    int n;
	    cin >> n; 
	    cin >> str;
        if (str.empty()) cout << 0 << endl;
        else if (isPalindrome(str))  cout << 1 << endl;
        else cout << 2 << endl;
	}
	return 0;
}

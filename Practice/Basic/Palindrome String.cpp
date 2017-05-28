#include <iostream>
#include <string>

using namespace std;

bool isPalindrome(string str) {
    for (int i = 0; i < str.size(); ++i)
        if (str[i] != str[str.size()-i-1])
            return false;
    
    return true;
}

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    string str;
	    cin >> str;
	    cout << (isPalindrome(str) ? "Yes": "No") << endl;
	}
	return 0;
}

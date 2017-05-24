#include <iostream>
using namespace std;

bool isPalindrome(int val) {
    string str = to_string(val);
    int n = str.size();
    for (int i = 0; i < n/2; ++i)
        if (str[i] != str[n-i-1])
           return false;
    
    return true;
}
int main() {
    int n;
    int val;
    cin >> n;
    while (n--) {
        cin >> val;
        cout << (isPalindrome(val) ? "Yes" : "No") << endl;
    }
	//code
	return 0;
}

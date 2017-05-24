#include <iostream>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
	//code
	int n;
	char ch;
	cin >> n;
	while (n--) {
	    cin >> ch;
	    cout << (isVowel(ch)? "YES": "NO") << endl;
	}
	return 0;
}

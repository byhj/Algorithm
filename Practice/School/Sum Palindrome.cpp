#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

const int CNT = 5;

bool isPalindrome(int num)
{
	string str = to_string(num);
	string t = str;
	reverse(str.begin(), str.end());
	return t == str;
} 
int addItself(string str)
{ 
    string t = str;
    reverse(str.begin(), str.end());
    int a = stoi(str);
    int b = stoi(t);
    return a + b;
}

int main() {
	int n;
	cin >> n;
	while (n--) {
		string str;
		cin >> str;
		int num = 0;
		bool isExist = false;
		for (int i = 0; i <= CNT; ++i) {
		    if ( isPalindrome(stoi(str)) ) {
				isExist = true;
				break;
			}
			num = addItself(str);
			str = to_string(num); 
		}
		cout << (isExist ? str : "-1") << endl;
	}
	return 0;
}

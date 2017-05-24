#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

bool isVowel(char ch)
{
   return ch == 'a' || ch == 'e' || ch == 'i' 
        || ch == 'o' || ch == 'u';
}

void reverseVowel(string &str)
{
    int beg = 0;
    int end = str.size()-1;
    while (beg < end) {
        while (beg < end && !isVowel(str[beg])) ++beg;
        while (beg < end && !isVowel(str[end])) --end;
        if (beg < end) swap(str[beg++], str[end--]);
    }
}
int main() {
	int n;
	cin >> n;
	while (n--) {
	  string str;
	  cin >> str;
	  reverseVowel(str);
	  cout << str << endl;
	}
	return 0;
}

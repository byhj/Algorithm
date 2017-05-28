#include <iostream>
#include <string>

using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
       string str;
       cin >> str;
       for (char ch : str) {
          int n = ch - 'a';
          if (n <= 14) cout << n/3+2;
          else if (n >= 15 && n <= 18) cout << 7;
          else if (n >= 19 && n <= 21) cout << 8;
          else cout << 9;
       }
       cout << endl;
    }
	return 0;
}

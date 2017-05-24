#include <iostream>
#include <string>

using namespace std;

int main() {
    int t, base;
    string str;
    cin >> t;
    while (t--) {
        cin >> base >> str;
        int ans = 0;
        for (int i = 0; i < str.size(); ++i) {
            int t = 0;
            if (isalpha(str[i])) {
                t = str[i] - 'A' + 10;
            }else {
                t = str[i] - '0';
            }
            ans = ans * base + t;
        }
        cout << ans << endl;
    }
	//code
	return 0;
}

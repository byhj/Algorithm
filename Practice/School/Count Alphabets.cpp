#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
    string str;
    int n;
    cin >> n;
    while (n--) {
        cin >> str;
        int ans = 0;
        for (auto ch : str) 
           if (isalpha(ch))
              ++ans;
        cout << ans << endl;
    }
	//code 
	return 0;
}

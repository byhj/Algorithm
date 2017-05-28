#include <iostream>
#include <string>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    string str = to_string(n);
	    if (str.size() < 3)  {
	       cout << "Number should be atleast three digits" << endl;
	       continue;
	    }
	    str += to_string(n*2) + to_string(n*3);
	    int a[10] = {0};
	    for (auto ch : str) {
	        ++a[ch-'0'];
	    }
	    bool flag = true;
	    for (int i = 1; i < 10; ++i) {
	        if (a[i] < 1 || a[i] > 1) {
	            flag = false;
	            break;
	        }
	    }
	    cout << (flag ? "Fascinating" : "Not Fascinating") << endl;
	}
	return 0;
}

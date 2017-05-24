#include <iostream>
#include <climits>

using namespace std;

int main() {
	//code
	int n;
	int num;
	cin >> n;
	while (n--) {
	    cin >>num;
	    int val;
	    int t = INT_MIN;
	    bool flag = true;
	    while (num--) {
	        cin >> val;
	        if (val >= t) {
	            t = val;
	        }else {
	            flag = false;
	        }
	    }
	    cout << (flag ? 1 : 0) << endl;
	}
	return 0;
}

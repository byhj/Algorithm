#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() {
    
    vector<int> vec(100, 1);
    string str = "11";
	for (int i = 2; i < 50; ++i) {
	    vec[i] = vec[i-1] + vec[i-2];
	    str += to_string(vec[i]);
	}
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    cout << str[n-1] << endl;
	}
	return 0;
}

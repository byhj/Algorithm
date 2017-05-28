#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n, x, y;
	cin >> t;
	while (t--) {
	    cin >> x >> y >> n;
	    vector<int> wall(n);
	    int sum = 0;
	    int day = x - y;
	    
	    for (int i = 0; i < n; ++i) {
	        int m = 0;
	        cin >> wall[i];
	        int w = wall[i];
	        while (w > x) {
	            w -= day;
	            ++m;
	        }
	        sum += ++m;
	    }
	    cout << sum << endl;
	}
	return 0;
}

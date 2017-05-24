#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n);
	    for (int i = 0; i < n; ++i) {
	        cin >> vec[i];
	    }
	    int beg = 0, end = n-1;
	    while (beg < end) {
	        //find 1
	        while (beg < end && vec[beg] == 0) ++beg;
	        while (beg < end && vec[end] == 1) --end;
	        if (beg < end) swap(vec[beg++], vec[end--]);
	    }
	    for (int i = 0; i < n; ++i) {
	        cout << vec[i] << " ";
	    }
	    cout << endl;
	}
	return 0;
}

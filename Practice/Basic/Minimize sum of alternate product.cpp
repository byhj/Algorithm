#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n);
	    for (int i = 0; i < n; ++i)  {
	        cin >> vec[i];
	    }
	    sort(vec.begin(), vec.end());
	    int sum = 0;
	    int beg = 0, end = vec.size()-1;
	    while (beg < end) {
	        sum += vec[beg++] * vec[end--];
	    }
	    cout << sum << endl;
	}
	return 0;
}

#include <iostream>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

int main() {
	int n, m;
	cin >> n;
	while (n--) {
	    cin >> m;
	    vector<int> vec(m);
	    for (int i = 0; i < m; ++i) {
	        cin >> vec[i];
	    }
	    sort(vec.begin(), vec.end(), greater<int>());
	    if (vec.size() == 1) cout << vec[0] << endl;
	    else {
	        string str;
	        for (auto val : vec) 
	            str += (val + '0');
	        }
	        cout << str << endl;
	    }
	}
	return 0;
}

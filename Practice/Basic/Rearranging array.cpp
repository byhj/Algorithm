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
	     for (int i = 0; i < n; ++i) {
	         cin >> vec[i];
	     }
	     sort(vec.begin(), vec.end());
	     int beg = 0, end = vec.size()-1;
	     while (beg < end) {
	         cout << vec[beg++] << " " << vec[end--] << " ";
	         if (beg == end) {
	             cout << vec[beg] << " ";
	             break;
	         } 
	     }
	     cout << endl;
	}
	return 0;
}

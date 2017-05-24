#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	int n, num, target;
	cin >> n;
	while (n--) {
	    cin >> num;
	    vector<int> vec(num);
	    for (int i = 0; i != num; ++i) 
	       cin >> vec[i];
	   
	    cin >> target;
	    auto iter = find(vec.begin(), vec.end(), target);
	    cout << ( iter == vec.end() ? -1: iter-vec.begin() ) << endl;
	}
	return 0;
}

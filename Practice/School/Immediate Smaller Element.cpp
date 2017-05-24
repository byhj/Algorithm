#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n);
	    for (int i = 0;i < n; ++i) 
	       cin >> vec[i];
        for (int i = 0; i < n-1; ++i) {
            if (vec[i] > vec[i+1]) {
                vec[i] = vec[i+1];
            } else {
                vec[i] = -1;
            }
        }     
        vec[n-1] = -1;
        for (int i = 0; i < n; ++i)
           cout << vec[i] << " ";
        cout << endl;
	}
	return 0;
}

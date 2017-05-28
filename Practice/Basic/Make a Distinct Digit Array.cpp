#include <iostream>
#include <vector>

using namespace std;

void dig(vector<int> &vec, int n)
{
    while (n) {
        int t = n % 10;
        vec[t] = 1;
        n /= 10;
    }
}

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n);
	    vector<int> cntVec(10, 0);
	    for (int i = 0; i < n; ++i) {
	        cin >> vec[i];
	        dig(cntVec, vec[i]);
	    }
	    for (int i = 0; i < 10; ++i) {
	        if (cntVec[i]) cout << i << " ";
	    }
	    cout << endl;
	       
	}
	return 0;
}

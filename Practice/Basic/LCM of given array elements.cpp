#include <iostream>
#include <vector>

using namespace std;

int gcd(int a, int b)
{
    if (b == 0) return  a;
    else return gcd(b, a%b);
}

int lcm(int a, int b)
{
    return a * b / gcd(a, b);
}

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n);
	    for (int i = 0; i < n; ++i) {
	        cin >> vec[i];
	    }
	    if (vec.size() == 1) cout << vec[0] << endl;
	    else {
	        int curLcm = lcm(vec[0], vec[1]);
	        for (int i = 2; i < vec.size(); ++i) {
	            curLcm = lcm(curLcm, vec[i]);
	        }
	        cout << curLcm << endl;
	    }
	}
	return 0;
}

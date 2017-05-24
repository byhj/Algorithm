#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;
//S(n) = a(1-rn)/(1-r) when r<1
//S(n) = a(rn-1)/(r-1) when r>1
//S(n) = na when r=1
int main() {
	int t;
	double n, a, r;
	cin >> t;
	while (t--) {
	    cin >> n >> a >> r;
	    if (r < 1) {
	        cout << fixed << setprecision(6) <<  a * (1-pow(r, n) ) / (1-r);
	    }else if (r > 1) {
	        cout << fixed << setprecision(6) <<  a *(pow(r, n)-1) / (r-1) ;
	    } else {
	        cout << fixed << setprecision(6) <<  n * a;
	    }
	    cout << endl;
	}
	return 0;
}

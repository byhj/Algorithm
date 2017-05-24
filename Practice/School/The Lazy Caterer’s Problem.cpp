#include <iostream>
#include <vector>

using namespace std;

vector<int> vec(1002, 0);

int fac(int n)
{
   vec[1] = 2;
   if (vec[n] != 0) return vec[n];
   else {
       for (int i = 2; i <= n; ++i) {
           vec[i] = vec[i-1] + i;
       }
       return vec[n];
   }
}

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    cout << fac(n) << endl;
	}
	return 0;
}

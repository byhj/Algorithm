#include <iostream>
#include <algorithm>

using namespace std;


int Solve(vector<int> a)
{
    int ans = 0;
   for (int i = 0; i < a.size(); ++i) {
       for (int j = i+1; j < a.size(); ++j) {
           for (int k = j+1; k < a.size(); ++k) {
               if (a[i]+a[j] > a[k] && a[i]+a[k] > a[j] && a[j]+a[k] > a[i] )
                  ++ans;
           }
       }
   }
   return ans;
}

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n);
	    for (int i = 0; i < n; ++i) cin >> vec[i];
	    int ans = Solve(vec);
	    cout << ans << endl;
	}
	return 0;
}

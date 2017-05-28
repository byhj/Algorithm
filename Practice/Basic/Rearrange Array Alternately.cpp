#include <iostream>
#include <bits/stdc++.h>
using namespace std;


void rearrange(vector<int> &vec) {
    vector<int> vt = vec;
    int beg = 0, end = vec.size()-1;
    int cur = 0;
    while (beg < end) {
        vec[cur++] = vt[end--];
        vec[cur++] = vt[beg++];
    }
    if (vec.size() & 1) 
       vec[cur] = vt[beg];
}
int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n);
	    for (int i = 0; i < n; ++i) cin >> vec[i];
	    rearrange(vec);
	    for (int i = 0; i < n; ++i) cout << vec[i] << " ";
	    cout << endl;
	}
	
	return 0;
}

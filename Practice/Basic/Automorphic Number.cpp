#include <iostream>
#include <string>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    string ns, ns2;
	    ns = to_string(n);
	    ns2 = to_string(n*n);
	    bool flag = ( ns == ns2.substr(ns2.size()-ns.size()) );
	    cout << (flag ? "Automorphic" : "Not Automorphic") << endl;
	    
	}
	return 0;
}

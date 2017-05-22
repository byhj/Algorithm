#include <iostream>
using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
	    int val;
	    cin >> val;
	    int pos = 0;
	    while (val) {
	        ++pos;
	        if (val % 2 == 0)  {
	            val /= 2;
	        }else {
	          break;
	        }
	    }
	    cout << pos << endl;
	}
	return 0;
}

#include <bits/stdc++.h>
using namespace std;

int main() {
	//code
	int t;cin >> t;
	while(t--){
	    int n;cin >> n;
	    if(n==0) cout << "0" << endl;
	    else cout << log2((n&~(n-1)))+1 << endl;
	}
	return 0;
}

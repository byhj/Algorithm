#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n);
	    vector<int> pas, neg;
	    for (int i = 0; i < n; ++i)  {
	        cin >> vec[i];
	        if (vec[i] < 0) neg.push_back(vec[i]);
	        else pas.push_back(vec[i]);
	    }
        int cur = 0;
        int idp = 0;
        int idn = 0;
        for (int i = 0; i < neg.size(); ++i) {
            vec[cur++] = pas[idp++];
            vec[cur++] = neg[idn++];
        }
        for (int i = idp; i < pas.size(); ++i)
           vec[cur++] = pas[idp];
           
        for (int i = 0; i < n; ++i) 
           cout << vec[i] << " ";
        cout << endl;
	}
	return 0;
}

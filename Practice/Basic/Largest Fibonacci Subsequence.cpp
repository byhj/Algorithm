#include <iostream>
#include <vector>
#include <unordered_set>

using namespace std;

unordered_set<int> facSet;
vector<int> vec(1002, 0);

void genFac()
{
    vec[0] = 0;
    vec[1] = 1;
    facSet.insert(vec[0]);
    facSet.insert(vec[1]);
    for (int i = 2; i < 1002; ++i) {
        vec[i] = vec[i-1] + vec[i-2];
        facSet.insert(vec[i]);
    }
    
}
int main() {
	int t, n;
	cin >> t;
	genFac();
	while (t--) {
	    cin >> n;
	    int val;
	    while (n--) {
	        cin >> val;
	        if (facSet.find(val) != facSet.end())
	            cout << val << " ";
	    }
	    cout << endl;
	}
	return 0;
}

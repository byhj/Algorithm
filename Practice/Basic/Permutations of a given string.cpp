#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;
void permute(vector<string> &ans, string &str, int beg, int end) {
    if (beg == end) {
        ans.push_back(str);
        return;
    }
    for (int i = beg; i <= end; ++i) {
        swap(str[beg], str[i]);
        permute(ans, str, beg+1, end);
        swap(str[beg], str[i]);
    }
}
int main() {
	int t;
	string str;
	cin >> t;
	while (t--) {
	    cin >> str;
	    vector<string> ans;
	    permute(ans, str, 0, str.size()-1);
	    sort(ans.begin(), ans.end());
	    for (auto val : ans) {
	        cout << val << " ";
	    }
	    cout << endl;
	}
	return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int addAround(vector<vector<int>> &vec, int row, int col) {
    int cnt = 0;
    //up
    if (row-1 >= 0 && vec[row-1][col] == 1) ++cnt;
    //left
    if (col-1 >= 0 && vec[row][col-1] == 1) ++cnt;
    //right
    if (col+1 < vec[0].size() && vec[row][col+1] == 1) ++cnt;
    //down
    if (row+1 < vec.size() && vec[row+1][col] == 1) ++cnt;
    
    return cnt;
}
int main() {
	int t, n, m;
	cin >> t;
	while (t--) {
	    cin >> n >> m;
	    vector<vector<int>> vec(n, vector<int>(m));
	    for (int row = 0; row < n; ++row) {
	        for (int col = 0; col < m; ++col){
	            cin >> vec[row][col];
	        }
	    }
	    int sum = 0;
	    for (int row = 0; row < n; ++row) {
	        for (int col = 0; col < m; ++col){
	            if (vec[row][col] == 0)
	               sum += addAround(vec, row, col);
	        }
	    }
	    cout << sum << endl;
	}
	return 0;
}

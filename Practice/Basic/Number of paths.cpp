#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, rows, cols;
	cin >> t;
	while (t--) {
	    cin >> rows >> cols;
	    vector<vector<int>> vec(rows, vector<int>(cols, 0));
	    for (int i = 0; i < rows; ++i) vec[i][0] = 1;
	    for (int i = 0; i < cols; ++i) vec[0][i] = 1;
	    
	    for (int i = 1; i < rows; ++i) {
	        for (int j = 1; j < cols; ++j) {
	            vec[i][j] = vec[i-1][j] + vec[i][j-1];
	        }
	    }
	    cout << vec[rows-1][cols-1] << endl;
	}
	return 0;
}

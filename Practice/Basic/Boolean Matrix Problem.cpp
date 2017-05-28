#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, rows, cols;
	cin >> t;
	while (t--) {
	    cin >> rows >> cols;
	    vector<vector<int>> mat(rows, vector<int>(cols));
	    vector<int> row_one(rows);
	    vector<int> col_one(cols);
	    for (int i = 0; i < rows; ++i) {
	        for (int j = 0; j < cols; ++j) {
	            cin >> mat[i][j];
	            if (mat[i][j] == 1) {
	                row_one[i] = 1;
	                col_one[j] = 1;
	            }
	        }
	    }
	    for (int i = 0; i < rows; ++i) {
	        for (int j = 0; j < cols; ++j) {
	            if (row_one[i] == 1 || col_one[j] == 1) {
	                mat[i][j] = 1;
	            }
	        }
	    }
	    for (int i = 0; i < rows; ++i) {
	        for (int j = 0; j < cols; ++j) {
	            cout << mat[i][j] << " ";
	        }
	    }
	    cout << endl;
	}
	return 0;
}

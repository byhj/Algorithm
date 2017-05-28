#include <iostream>
using namespace std;

const int n = 3;
int main() {
	int t;
	int ma[n][n], mb[n][n], mc[n][n];
	
	cin >> t;
	while (t--){
	    for (int i = 0; i < n; ++i) {
	        for (int j = 0; j < n; ++j) {
	            cin >> ma[i][j];
	        }
	    }
	    for (int i = 0; i < n; ++i) {
	        for (int j = 0; j < n; ++j) {
	            cin >> mb[i][j];
	        }
	    }
	   for (int i = 0; i < n; ++i) {
	        for (int j = 0; j < n; ++j) {
	             int t = 0;
	            for (int k = 0; k < n; ++k) {
	                t += ma[i][k] * mb[k][j];
	            }
	            mc[i][j] = t;
	        }
	    }
	    
	    for (int i = 0; i < n; ++i) {
	        for (int j = 0; j < n; ++j) {
	            cout << mc[i][j] << " ";
	        }
	        cout << endl;
	    }
	    
	}
	return 0;
}

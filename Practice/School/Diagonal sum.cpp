#include <iostream>
#include <vector>

using namespace std;

int main() {
	int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<vector<int>> vec(n, vector<int>(n));
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                cin >> vec[i][j];
            }
        }
        int sum = 0;
        int j = n-1;
        for (int i = 0; i < n; ++i) {
            sum += vec[i][i];
            sum += vec[i][j--];
        }
        cout << sum << endl;
    }
	return 0;
}

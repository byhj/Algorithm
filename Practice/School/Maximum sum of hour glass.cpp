#include <iostream>
#include <vector>
#include <climits>

using namespace std;

int main() {
	int t, n, m;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<vector<int>> arr(n, vector<int>(m));
        for (int row = 0; row < n; ++row) {
            for (int col = 0; col < m; ++col) {
                cin >> arr[row][col];
            }
        }
        if (n < 3 || m < 3) cout << -1 << endl;
        else {
            int ans = INT_MIN;
            for (int i = 0; i < n-2; ++i) {
                for (int j = 0; j < m-2; ++j) {
                    int sum = arr[i][j] + arr[i][j+1] + arr[i][j+2] +
                              arr[i+1][j+1] + arr[i+2][j] + arr[i+2][j+1] +
                              arr[i+2][j+2];
                    if (ans < sum) {
                        ans = sum;
                    }
                }
            }
            cout << ans << endl;
        }
    }
	return 0;
}

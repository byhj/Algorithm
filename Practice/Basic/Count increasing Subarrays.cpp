#include <iostream>
#include <vector>

using namespace std;

int countInc(const vector<int> &vec)
{
    int cnt = 0;
    for (int i = 0; i < vec.size(); ++i) {
        for (int j = i+1; j < vec.size(); ++j) {
            if (vec[j] > vec[j-1]) {
                ++cnt;
            }else {
             // If subarray arr[i..j] is not strictly 
            // increasing, then subarrays after it , i.e., 
            // arr[i..j+1], arr[i..j+2], .... cannot
            // be strictly increasing
                break;
            }
        }
    }
    return cnt;
}
int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    vector<int> vec(n);
	    for (int i = 0; i < n; ++i) cin >> vec[i];
	    cout << countInc(vec) << endl;
	}
	return 0;
}

#include <iostream>
using namespace std;

const int NUM = 10;
int main() {
	int n;
	cin >> n;
	int arr[NUM];
	while (n--) {
	    for (int i = 0; i < NUM; ++i) {
	        cin >> arr[i];
	    }
	    int ans = 0;
	    if (arr[NUM/2] == arr[NUM/2+1]) ans = arr[NUM/2];
	    if (arr[NUM/2-1] == arr[NUM/2-2]) ans = arr[NUM/2-1];
	    cout << ans << endl;
	}
	return 0;
}

#include <iostream>
#include <queue>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    priority_queue<int> pq;
	    int val;
	    while (n--) {
	        cin >> val;
	        pq.push(val);
	    }
	    int ans = pq.top();
	    pq.pop();
	    ans *= pq.top();
	    cout << ans << endl;
	}
	return 0;
}

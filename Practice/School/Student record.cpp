#include <iostream>
#include <queue>
#include <utility>
#include <string>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    priority_queue<pair<int, string>> pq;
	    while (n--) {
	        string name;
	        int s1, s2, s3;
	        cin >> name >> s1 >> s2 >> s3;
	        int avg = (s1 + s2 + s3) / 3;
	        pq.push(make_pair(avg, name));
	    }
	    auto iter = pq.top();
	    cout << iter.second << " " << iter.first << endl;
	}
	return 0;
}

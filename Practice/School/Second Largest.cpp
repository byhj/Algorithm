#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main() {
	//code
	int n;
	int num;
	cin >> n;
	while (n--) {
	    cin >> num;
	    int val;
	    priority_queue<int> pq;
	    while (num--) {
	        cin >> val;
	        pq.push(val);
	    }
	    pq.pop();
	    cout << pq.top() << endl;
	}
	return 0;
}

/*
#include <iostream>
#include <queue>
#include <functional>

using namespace std;

int main() {
	//code
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    int val = 0;
	    int maxVal, seMax;
	    cin >> maxVal >> seMax;
	    if (maxVal < seMax) swap(maxVal, seMax);
	    for (int i = 2; i < n; ++i) {
	        cin >> val;
	        if (val > maxVal) {
	            seMax = maxVal;
	            maxVal = val;
	        }else if (val > seMax) {
	            seMax = val;
	        }
	    }
	    cout << seMax << endl;
	}
	return 0;
}
*/
	            

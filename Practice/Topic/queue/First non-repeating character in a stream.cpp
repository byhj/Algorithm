#include <iostream>
#include <deque>
#include <vector>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    char ch;
	    deque<char> chQue;
	    vector<int> chVec(26, 0);
	    while (n--) {
	        cin >> ch;
	        chQue.push_back(ch);
	        ++chVec[ch-'a'];
            deque<char> tempQue = chQue;
            bool isValid = false;
            //use queue to find the first non repeating elements, notice store the queue
            while (!chQue.empty()) {
                ch = chQue.front();
                chQue.pop_front();
                if (chVec[ch-'a'] == 1) {
                    cout << ch << " ";
                    isValid = true;
                    break;
                }
            }
            chQue = tempQue;
            if (!isValid) cout << -1 << " ";
	    }
	    cout << endl;
	}
	return 0;
}

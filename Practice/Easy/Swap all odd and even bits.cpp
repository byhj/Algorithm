#include <iostream>
#include <deque>
#include <cmath>

using namespace std;

int main() {
	int t, n;
	cin >> t;
	while (t--) {
	    cin >> n;
	    deque<int> bitQue;
	    while (n) {
	        bitQue.push_front(n % 2);
	        n /= 2;
	    }
	    while (bitQue.size() != 8) {
	        bitQue.push_front(0);
	    }
	    for (int i = 0; i < bitQue.size()-1; i+=2) {
	        swap(bitQue[i], bitQue[i+1]);
	    }
	    int val = 0;
        for (int i =  bitQue.size()-1; i >= 0; --i) {
            val += pow(2, bitQue.size()-1-i) * bitQue[i];
        }
        cout << val << endl;
	    
	}
	return 0;
}

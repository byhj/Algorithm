#include <iostream>
#include <vector>

using namespace std;

int main() {
	int n;
	cin >> n;
	while (n--) {
	    int sc1 = 0, sc2 = 0;
	    vector<int> vec1(3), vec2(3);
	    for (int i = 0; i < 3; ++i) {
	        cin >> vec1[i];
	    }
	    for (int i = 0; i < 3; ++i) {
	        cin >> vec2[i];
	    }
	    for (int i = 0; i < 3; ++i) {
	       if (vec1[i] < vec2[i]) ++sc2;
	       if (vec1[i] > vec2[i]) ++sc1;
	    }
	    cout << sc1 << " " << sc2 << endl;
	}
	return 0;
}

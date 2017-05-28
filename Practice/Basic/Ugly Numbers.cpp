#include <iostream>
#include <algorithm>

using namespace std;
   //   (1) 1¡Á2, 2¡Á2, 3¡Á2, 4¡Á2, 5¡Á2, ¡­
   //   (2) 1¡Á3, 2¡Á3, 3¡Á3, 4¡Á3, 5¡Á3, ¡­
   //   (3) 1¡Á5, 2¡Á5, 3¡Á5, 4¡Á5, 5¡Á5, ¡­
   // ugly x 2, 3, 5
void makeUgly(vector<int> &vec) {
   //merge sort for three subsequence
   int id2 = 0, id3 = 0, id5 = 0;
   vec[0] = 1;
   int f2 = 2, f3 = 3, f5 = 5;
   for (int i = 1; i < vec.size(); ++i) {
       int ugly = min(f2, min(f3, f5));
       vec[i] = ugly;
       if (f2 == ugly) f2 = 2 * vec[++id2];
       if (f3 == ugly) f3 = 3 * vec[++id3];
       if (f5 == ugly) f5 = 5 * vec[++id5];
   }
   
}

int main() {
	int t, n;
	cin >> t;
	vector<int> vec(502);
	makeUgly(vec);
	
	while (t--) {
	    cin >> n;
	    cout << vec[n-1] << endl;
	}

	return 0;
}

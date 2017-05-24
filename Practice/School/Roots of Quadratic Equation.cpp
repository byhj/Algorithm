#include <iostream>
#include <cmath>

using namespace std;

// Prints roots of quadratic equation ax*2 + bx + x
void findRoots(int a, int b, int c)
{
     // If a is 0, then equation is not quadratic, but
     // linear
     if (a == 0) {
        cout << "Invalid";
        return;
     }
 
     int d  = b*b - 4*a*c;
     double sqrt_val = sqrt(abs(d));
 
     if (d > 0) {
         cout << floor((double)(-b + sqrt_val)/(2*a)) << " "
              << floor((double)(-b - sqrt_val)/(2*a));
     }
     else if (d == 0)  {
         cout << floor(-(double)b / (2*a)) << " " 
              << floor(-(double)b / (2*a));
     } // d < 0 
     else{
         cout << "Imaginary";
     }
}

int main() {
	int t, a, b, c;
	cin >> t;
	while (t--) {
	    cin >> a >> b >> c;
	    findRoots(a, b, c);
	    cout << endl;
	}
	return 0;
}

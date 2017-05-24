#include <iostream>
using namespace std;

bool isLeap(int year)
{
    return  (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);  
}

int main() {
	int t, d, m, y;
	cin >> t;
	 int mon[] = {0,31,28,31,30,31,30,31,31,30,31,30,31};
	while (t--) {
	    cin >> d >> m >> y;
	    bool isValid = true;
	    if (d < 1 || d > 31 || m < 1 || m > 12 || y < 1800 || y > 9999) 
		   isValid = false;
        else {
        	//is leap year
        	if (m == 2 && isLeap(m)) mon[2] = 29;
        	if (d > mon[m]) isValid = false;
	   }
	    cout << isValid << endl;
	}
	return 0;
}

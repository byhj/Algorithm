#include <iostream>

using namespace std;

int distance(int x1, int y1, int x2, int y2)
{
    return (x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
}

int main() {
	int t, a[2], b[2], c[2], d[2];
	cin >> t;
	while(t--) {
       cin >> a[0] >> a[1];
       cin >> b[0] >> b[1];
       cin >> c[0] >> c[1];
       cin >> d[0] >> d[1];
	    
	    if ((distance(a[0],a[1],c[0],c[1]) ^ distance(b[0],b[1],d[0],d[1]) ^ distance(a[0],a[1],b[0],b[1]) ^
	         distance(b[0],b[1],c[0],c[1]) ^ distance(c[0],c[1],d[0],d[1]) ^ distance(d[0],d[1],a[0],a[1]))==0)
	        cout << 1 << endl;
	    else
	        cout << 0 << endl;
	}
	return 0;
}

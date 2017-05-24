#include <iostream>
#include <string>

using namespace std;

int getMax(string str)
{
    int maxVal = 0;
    int minVal = 0;
    for (int i = 0; i < str.size(); ++i) {
        maxVal *= 10;
        minVal *= 10;
        int v = str[i]-'0';
        if (v == 5) {
            maxVal += 6;
            minVal += v;
        }
        else if (v == 6) {
            minVal += 5;
            maxVal += v;
        }
        else {
            maxVal += v;
            minVal += v;
        }
    }
    return maxVal + minVal;
}
int main() {
	int n;
	cin >> n;
	while (n--) {
	    string str;
	    cin >> str;
	    int ans = getMax(str);
	    cout << ans << endl;
	}
	return 0;
}

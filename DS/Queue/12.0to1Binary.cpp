/*

Given a number n, write a function that generates and prints all binary numbers with decimal values from 1 to n.

Examples:

Input: n = 2
Output: 1, 10

Input: n = 5
Output: 1, 10, 11, 100, 101

A simple method is to run a loop from 1 to n, call decimal to binary inside the loop.


1
10
11
100
101
110
111
1000
1001
1010

*/

#include <queue>
#include <string>
#include <vector>

using namespace std;

vector<string> generateBinary(int n)
{
	vector<string> strVec;
	queue<string> strQue;
	strQue.push("1");
	for (int i = 1; i <= n; ++i) {
		string str = strQue.front();
		strVec.push_back(str);
		strQue.push(str + "0");
		strQue.push(str + "1");
	}
	return strVec;
}

int main()
{
    generateBinary(4);
	return 0;
}

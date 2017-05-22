
//Time Complexity: O(n*n!) Note that there are n! permutations and it requires O(n) time to print a a permutation.

#include <iostream>
#include <vector>
#include <string>

using namespace std;

void permute(string &str, int beg, int end)
{
	if (beg == end) cout << str << endl;
	else {
		for (int i = beg; i <= end; ++i) {
			swap(str[beg], str[i]);
			permute(str, beg+1, end);
			swap(str[beg], str[i]); //backtrack
		}
	}
	
}

int main()
{
	string str = "ABC";
	permute(str, 0, 2);
	return 0;
}

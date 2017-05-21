/*
You can win three kinds of basketball points, 1 point, 2 points, and 3 points. Given a total score n, print out all the combination to compose n.

Examples:
For n = 1, the program should print following:
1

For n = 2, the program should print following:
1 1
2

For n = 3, the program should print following:
1 1 1
1 2
2 1
3

Algorithm:
At first position we can have three numbers 1 or 2 or 3.
First put 1 at first position and recursively call for n-1.
Then put 2 at first position and recursively call for n-2.
Then put 3 at first position and recursively call for n-3.
If n becomes 0 then we have formed a combination that compose n, so print the current combination.

*/

#include <iostream>

using namespace std;

 const int  MAX_POINT = 3;
 
 void composition(int n, int i)
 {
 	static int arr[100];
 	if (n == 0) {
 		for (int j = 0; j < i; ++j) {
 			cout << arr[j] << " "; 
		 }
		 cout << endl;
	 }
 	else if (n > 0) {
 		for (int j = 1; j <= MAX_POINT; ++j) {
 			arr[i] = j;
 			composition(n-j, i+1);
		 }
	 }
  } 
  
 
/* Driver function to test above functions */
int main()
{
  int n = 5;
  composition(n, 0);
  return 0;
}

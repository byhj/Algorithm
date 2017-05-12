/*
Write a program to reverse a stack using recursion. You are not allowed to use loop constructs like while, for..etc, and you can only use the following ADT functions on Stack S:
isEmpty(S)
push(S)
pop(S)
*/

#include <stack>
#include <iostream>
#include <vector>

using namespace std;

void insertBottom(stack<int> &sta, int x)
{
	if (sta.empty()) {
		sta.push(x);
	}
	else {
		/* Hold all items in Function Call Stack until we
		reach end of the stack. When the stack becomes
		empty, the isEmpty(*top_ref)becomes true, the
		above if part is executed and the item is inserted
		at the bottom */
		int t = sta.top();
		sta.pop();
		insertBottom(sta, t);
		/* Once the item is inserted at the bottom, push all
		the items held in Function Call Stack */
		sta.push(t);
	}
 

}
void reverseSta(stack<int> &sta)
{
	if (sta.empty()) return;

	int x = sta.top();
	sta.pop();
	reverseSta(sta);
	insertBottom(sta, x);
}

int main()
{
	stack<int> sta;
	sta.push(4);
	sta.push(3);
	sta.push(2);
	sta.push(1);
	reverseSta(sta);

	return 0;
}
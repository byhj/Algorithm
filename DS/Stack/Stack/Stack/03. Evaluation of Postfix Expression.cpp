/*

The Postfix notation is used to represent algebraic expressions. The expressions written in postfix form are evaluated faster compared to infix notation as parenthesis are not required in postfix. We have discussed infix to postfix conversion. In this post, evaluation of postfix expressions is discussed.

Following is algorithm for evaluation postfix expressions.
1) Create a stack to store operands (or values).
2) Scan the given expression and do following for every scanned element.
бн..a) If the element is a number, push it into the stack
бн..b) If the element is a operator, pop operands for the operator from stack. Evaluate the operator and push the result back to the stack
3) When the expression is ended, the number in the stack is the final answer

*/

#include<stack>
#include<string>
#include<iostream>

using namespace std;

int evalPostfix(string str)
{
	stack<int> numSta;
	for (char ch : str) {
		if (isdigit(ch)) {
		   numSta.push(ch-'0');
		}
		else {
		   int v1 = numSta.top();
		   numSta.pop();
		   int v2 = numSta.top();
		   numSta.pop();
		   //notice v2 to v1, v2 is left
		   switch(ch) {
		      case '+': numSta.push(v2 + v1); break;
		      case '-': numSta.push(v2 - v1); break;
		      case '*': numSta.push(v2 * v1); break;
		      case '/': numSta.push(v2 / v1); break;
		   }
		}
	}
	return numSta.top();
}

/*
int main()
{
	cout << evalPostfix("231*+9-");
	cin.get();
	return 0;
}
*/
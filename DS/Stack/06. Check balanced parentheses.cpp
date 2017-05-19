/*
Given an expression string exp , write a program to examine whether the pairs and the orders of ¡°{¡°,¡±}¡±,¡±(¡°,¡±)¡±,¡±[¡°,¡±]¡± are correct in exp. For example, the program should print true for exp 
   = ¡°[()]{}{[()()]()}¡± and false for exp = ¡°[(])¡±
*/

#include <iostream>
#include <string>
#include <stack>
using namespace std;

bool isBanlanced(string str)
{
	stack<char> chSta;
	for (char ch : str) {
		if (ch == '(' || ch == '{' || ch == '[') {
			chSta.push(ch);
		}else {
			if (chSta.empty()) return false;
			char ct = chSta.top();
			chSta.pop();
			//check if match
			if ((ch == '(' && ct == ')')
				|| (ch == '[' && ct == ']')
				|| (ch == '{' && ct == '}')) {
				continue;
			}
			else{
				return false;
			}
		}
	}
	return chSta.empty();
}
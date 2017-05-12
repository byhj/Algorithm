#include <stack>
#include <deque>
#include <iostream>

using namespace std;

template<typename T>
class Stack<T> {
	void push(int x)
	{
		deq.push_back(x);
	}
	void pop()
	{
		deq.pop_back();
	}
	int top()
	{
		return deq.back();
	}
	bool empty()
	{
		return deq.empty();
	}
	deque<T> deq;
};

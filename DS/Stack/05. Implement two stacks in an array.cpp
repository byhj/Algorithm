#include <iostream>

using namespace std;

const int SIZE = 100;

class TwoStack {
public:
	TwoStack() {
		size = SIZE;
		top1 = -1;
		top2 = SIZE;
	}
	void push1(int x) {
		if (top1 <= top2) {
			arr[++top1] = x;
		}
		else {
			cout << "Stack1 Overflow" << endl;
		}
	}
	void push2(int x) {
		if (top1 <= top2) {
			arr[--top2] = x;
		}
		else {
			cout << "Stack2 Overflow" << endl;
		}
	}
	int pop1() {
		if (top1 > -1) {
			int x = arr[top1];
			--top1;
			return x;
		}
		else {
			cout << "Stack1 Underflow" << endl;
			exit(-1);
		}
	}	
	int pop2() {
		if (top1 < SIZE) {
			int x = arr[top2];
		    ++top2;
			return x;
		}
		else {
			cout << "Stack1 Underflow" << endl;
			exit(1);
		}
	}
private:
	int size;
	int top1, top2;
	int arr[SIZE];
};


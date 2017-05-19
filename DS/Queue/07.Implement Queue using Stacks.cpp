/*

Method 1 (By making enQueue operation costly) This method makes sure that oldest 
entered element is always at the top of stack 1, so that deQueue operation just 
pops from stack1. To put the element at top of stack1, stack2 is used.

enQueue(q, x)
  1) While stack1 is not empty, push everything from satck1 to stack2.
  2) Push x to stack1 (assuming size of stacks is unlimited).
  3) Push everything back to stack1.

dnQueue(q)
  1) If stack1 is empty then error
  2) Pop an item from stack1 and return it
Method 2 (By making deQueue operation costly)In this method, in en-queue operation,
 the new element is entered at the top of stack1. In de-queue operation, if stack2 
 is empty then all the elements are moved to stack2 and finally top of stack2 is returned.

enQueue(q,  x)
  1) Push x to stack1 (assuming size of stacks is unlimited).

deQueue(q)
  1) If both stacks are empty then error.
  2) If stack2 is empty
       While stack1 is not empty, push everything from stack1 to stack2.
  3) Pop the element from stack2 and return it.
Method 2 is definitely better than method 1.
Method 1 moves all the elements twice in enQueue operation, while method 2 
(in deQueue operation) moves the elements once and moves elements only if stack2 empty.
Implementation of method 2:

*/

void enQueue(int x)
{
	sta1.push(x);
}

int deQueue()
{
	if (sta1.empty() && sta2.empty()) {
		cout << "Error Empty" << endl;
	}
	if (sta2.empty()){
		while (!sta1.empty()) {
			sta2.push(sta1.top());
			sta1.pop();
		}
	}
	int x = sta1.top();
	sta1.pop();
	return x;
}


/*

Queue can also be implemented using one user stack and one Function Call Stack. Below is modified Method 2 where recursion (or Function Call Stack) is used to implement queue using only one user defined stack.

enQueue(x)
  1) Push x to stack1.

deQueue:
  1) If stack1 is empty then error.
  2) If stack1 has only one element then return it.
  3) Recursively pop everything from the stack1, store the popped item 
    in a variable res,  push the res back to stack1 and return res
    
    */
 

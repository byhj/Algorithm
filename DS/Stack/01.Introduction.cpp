/*
Stack is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).

Push: Adds an item in the stack. If the stack is full, then it is said to be an Overflow condition.
Pop: Removes an item from the stack. The items are popped in the reversed order in which they are pushed. If the stack is empty, then it is said to be an Underflow condition.
Peek or Top: Returns top element of stack.
isEmpty: Returns true if stack is empty, else fals.

push(), pop(), isEmpty() and peek() all take O(1) time. 
*/

//array


//max stack size
const int MAX_SIZE = 100;

class Stack {
public:
   Stack();

   int pop();
   bool push(int x);
   bool isEmpty();
   
private:
   int top;
   int arr[MAX_SIZE];
}

Stack::Stack()
{
    top = -1;
}

int Stack::pop()
{
    if (top < 0) {
        cout << "Stack Underflow";
        return 0;
    } else {
         return arr[top--];
    }
}

bool Stack::isEmpty()
{
    return top < 0;
}

bool Stack::push(int x)
{
    if (top >= MAX_SIZE-1) {
        cout << "Stack Overflow";
        return false;
    }else {
        arr[++top] = x;
        return true;
    }
}
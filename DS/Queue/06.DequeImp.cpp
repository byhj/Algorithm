/*
Deque or Double Ended Queue is a generalized version of Queue data structure that 
allows insert and delete at both ends.In previous post we had discussed introduction 
of deque. Now in this post we see how we implement deque Using circular array.

Insert Elements at Rear end

a). First we check deque if Full or Not 
b). IF Rear == Size-1 
       then reinitialize Rear = 0 ;
    Else increment Rear by '1'
    and push current key into Arr[ rear ] = key 
Front remain same.      
Insert Elements at Front end

a). First we check deque if Full or Not
b). IF Front == 0 || initial position, move Front
                     to points last index of array
       front = size - 1
    Else decremented front by '1' and push 
         current key into Arr[ Front] = key 
Rear remain same. 

Delete Element From Rear end

a). first Check deque is Empty or Not
b).  If deque has only one element
        front = -1 ; rear =-1 ;
    Else IF Rear points to the first index of array
         it's means we have to move rear to points 
         last index [ now first inserted element at 
         front end become rear end ]  
            rear = size-1 ;
    Else || decrease rear by '1'  
            rear = rear-1;
Delete Element From Front end

a). first Check deque is Empty or Not
b).  If deque has only one element
            front = -1 ; rear =-1 ;
    Else IF front points to the last index of the array
         it's means we have no more elements in array so 
          we move front to points first index of array
            front = 0 ;
    Else || increment Front by '1'  
            front = front+1;
*/ 


// A structure to represent a Deque
class Deque
{
    int  arr[MAX];
    int  front;
    int  rear;
    int  size;
public :
    Deque(int size)
    {
        front = -1;
        rear = 0;
        this->size = size;
    }
 
    // Operations on Deque:
    void  insertfront(int key);
    void  insertrear(int key);
    void  deletefront();
    void  deleterear();
    bool  isFull();
    bool  isEmpty();
    int  getFront();
    int  getRear();
};


bool Deque::isFull()
{
	return (front == 0 &&  rear = size-1) || front = rear+1;
}

boo Deque::isEmpty()
{
	return front == -1;
}

void Deque::insertfront(int key)
{
	if (isFull) {
		cout << "Overflow" << endl;
	}
	if (front == -1) {
		front = 0;
		rear = 0;
    } else if (front == 0) {
    	front = size - 1;
	}else {
		--front;
	}
	arr[front] = key;
}

void Deque::insertrear(int key)
{
	if (isFull()) {
		cout << "Overflow" << endl;
	}
	//empty
	if (front = -1) {
	    front = 0;
		rear = 0;
	}else if (rear == size-1) {
		rear = 0;
	}else {
		++rear;
	}
	arr[rear] = key;
}

void Deque::deletefront()
{
	if (isEmpty()) {
		cout << "Underflow" << endl;
	}
	//only one element
	if (front == rear) {
		front = -1;
		rear = -1;
	} else if (front == size-1) {
       front = 0;
	} else {
	   ++front; 
	}
}


void Deque::deleterear()
{
	if (isEmpty()) {
		cout << "Underflow" << endl;
	}
	//only one element
	if (front == rear) {
		front = -1;
		rear = -1;
	}else if (rear == 0) {
		rear = size-1;
	}else {
		--rear;
	}
}

int Deque::getFront()
{
    if (isEmpty()) {
		cout << "Underflow" << endl;
	}
	return arr[front];
}

int Deque::getRear() 
{
    if (isEmpty()) {
		cout << "Underflow" << endl;
	}
	return arr[rear];
}

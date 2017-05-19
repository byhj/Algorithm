/*
Priority Queue is an extension of queue with following properties.
1) Every item has a priority associated with it.
2) An element with high priority is dequeued before an element with low priority.
3) If two elements have the same priority, they are served according to their order in the queue.

insert(item, priority): Inserts an item with given priority.
getHighestPriority(): Returns the highest priority item.
deleteHighestPriority(): Removes the highest priority item.

Using Heaps:
Heap is generally preferred for priority queue implementation because heaps provide
 better performance compared arrays or linked list. In a Binary Heap, getHighestPriority() 
 can be implemented in O(1) time, insert() can be implemented in O(Logn) time and 
 deleteHighestPriority() can also be implemented in O(Logn) time.
With Fibonacci heap, insert() and getHighestPriority() can be implemented in O(1) 
amortized time and deleteHighestPriority() can be implemented in O(Logn) amortized time.

Applications of Priority Queue:
1) CPU Scheduling
2) Graph algorithms like Dijkstra¡¯s shortest path algorithm, Prim¡¯s Minimum Spanning Tree, etc
3) All queue applications where priority is involved.

We will soon be discussing array and heap implementations of priority queue.
*/ 

# Linked List

A linked list is a linear data structure where each element is a separate object.
Linked list elements are not stored at contiguous location; the elements are linked using pointers.

Each node of a list is made up of two items - the data and a reference to the next node. The last node has a reference to null. The entry point into a linked list is called the head of the list. It should be noted that head is not a separate node, but the reference to the first node. If the list is empty then the head is a null reference.

<hr/>

### <a href="https://github.com/sanya2508/Linked-list/blob/master/insert%20at%20head.cpp">Insert at head </a>

### <a href="https://github.com/sanya2508/Linked-list/blob/master/insert%20in%20middle%20and%20at%20tail.cpp">Insert in middle and tail</a>

### <a href="https://github.com/sanya2508/Linked-list/blob/master/linked%20list%20deletion.cpp">Linked list deletion</a>

### <a href="https://github.com/sanya2508/Linked-list/blob/master/search%20(iterative%20and%20recursive).cpp">Linked list searching</a>
 * Iterative
 * Recursive

### <a href="https://github.com/sanya2508/Linked-list/blob/master/taking%20input.cpp">Taking input</a>

### Operator overloading

<hr/>

### <a href="https://github.com/sanya2508/Linked-list/blob/master/reverse%20linked%20list.cpp">Linked list reverse</a>
 * Iterative:
    * N= C->next //save the enxt node
    * C->next = P // make the current node point to prev.
    * P = C // update prev.
    * C = N // update current
    * Termination condition: while(C!= NULL)
 * Recursive
    * C->next->next = C
    * C->next = NULL

<hr/>

### <a href="https://github.com/sanya2508/Linked-list/blob/master/midpoint%20(runner%20technique).cpp">Mid Point Runner Technique</a>
*Given a linked list, find its mid point.*
 * Take two pointers (fast and slow). (Point both at head, or slow at head and fast at head->next as per conditions).
 * Fast pointer will take two jumps, and simultaneously slow pointer will take one jump.

<hr/>

### <a href="https://github.com/sanya2508/Linked-list/blob/master/kth%20node%20from%20end%20(single%20pass).cpp">Kth node from the end</a>
*Find the kth node from the end of linked list.*
 * Apply runner technique.
 * Take two pointers fast and slow, make both the pointers point at head.
 * Move fast k steps ahead.
 * Move slow and fast simultaneously one step at a time.
 * When fast pointer will point to NULL, slow pointer will be at the kth node from the end.

<hr/> 
 
### <a href="https://github.com/sanya2508/Linked-list/blob/master/merge-two-sorted-linked-list.cpp">Merge two sorted linked list</a>
 * Using recursion.
 
<hr/>

### <a href="https://github.com/sanya2508/Linked-list/blob/master/merge%20sort.cpp">Merge sort</a>
*Sorting an unsorted linked list*
 * Break at mid. (Divide)
 * Sort the smaller linked list. (Recursively)
 * Merge the sorted parts.
 * O(nlogn)

<hr/>

### Floyd's Cycle
*Cycle detection and removal*
 * Keep two pointers fast and slow starting from head.
 * Fast will take two steps, and slow will simultaneously take one step.
 * If linked list contains cycle, slow and fast will meet after sometime.
 
<hr/>

### <a href="https://github.com/sanya2508/Linked-list/blob/master/circular%20linked%20list.cpp">Circular Linked List</a>
 * Insert
 * Traverse
 * Delete

<hr/>

### <a href="https://github.com/sanya2508/Linked-list/blob/master/list%20stl.cpp"> List STL impementation </a>

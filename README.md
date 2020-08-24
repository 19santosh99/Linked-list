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


<hr/>

## Lists implementation: (Similar to doubly linked list)
 * Lists are sequence containers that allow non-contiguous memory allocation. As compared to vector, list has slow traversal, but once a position has been found, insertion and deletion are quick. Normally, when we say a List, we talk about doubly linked list. For implementing a singly linked list, we use forward list.
 * ### Functions involved in list: 
      * front() – Returns the value of the first element in the list.
      * back() – Returns the value of the last element in the list .
      * push_front(g) – Adds a new element ‘g’ at the beginning of the list .
      * push_back(g) – Adds a new element ‘g’ at the end of the list.
      * pop_front() – Removes the first element of the list, and reduces size of the list by 1.
      * pop_back() – Removes the last element of the list, and reduces size of the list by 1
      * list::begin() and list::end() in C++ STL– begin() function returns an iterator pointing to the first element of the list
      * end()– end() function returns an iterator pointing to the theoretical last element which follows the last element.
      * list rbegin() and rend() function in C++ STL– rbegin() returns a reverse iterator which points to the last element of the list. rend() returns a reverse iterator which points to the position before the beginning of the list.
      * list cbegin() and cend() function in C++ STL– cbegin() returns a constant random access iterator which points to the beginning of the list. cend() returns a constant random access iterator which points to the end of the list.
      * list crbegin() and crend() function in C++ STL– crbegin() returns a constant reverse iterator which points to the last element of the list i.e reversed beginning of container. crend() returns a constant reverse iterator which points to the theoretical element preceding the first element in the list i.e. the reverse end of the list.
      * empty() – Returns whether the list is empty(1) or not(0).
      * insert() – Inserts new elements in the list before the element at a specified position.
      * erase() – Removes a single element or a range of elements from the list.
      * assign() – Assigns new elements to list by replacing current elements and resizes the list.
      * remove() – Removes all the elements from the list, which are equal to given element.
      * list::remove_if() in C++ STL– Used to remove all the values from the list that correspond true to the predicate or condition given as parameter to the function.
      * reverse() – Reverses the list.
      * size() – Returns the number of elements in the list.
      * list resize()function in C++ STL– Used to resize a list container.
      * sort() – Sorts the list in increasing order.
      * list max_size() function in C++ STL– Returns the maximum number of elements a list container can hold.
      * list unique() in C++ STL– Removes all duplicate consecutive elements from the list.
      * list::emplace_front() and list::emplace_back() in C++ STL– emplace_front() function is used to insert a new element into the list container, the new element is added to the beginning of the list. emplace_back() function is used to insert a new element into the list container, the new element is added to the end of the list.
      * list::clear() in C++ STL– clear() function is used to remove all the elements of the list container, thus making it size 0.
      * list::operator= in C++ STL– This operator is used to assign new contents to the container by replacing the existing contents.
      * list::swap() in C++ STL– This function is used to swap the contents of one list with another list of same type and size.
      * list splice() function in C++ STL– Used to transfer elements from one list to another.
      * list merge() function in C++ STL– Merges two sorted lists into one
      * list emplace() function in C++ STL– Extends list by inserting new element at a given position.



<hr/>

## Forward list: (Similar to singly linked list)
  * Forward list in STL implements singly linked list. Forward List is preferred over list when only forward traversal is required (same as singly linked list is preferred over doubly linked list) as we can save space. Some example cases are, chaining in hashing, adjacency list representation of graph, etc.
  * ### Functions/operations involved in list:
      * assign() :- This function is used to assign values to forward list, its another variant is used to assign repeated elements.
      * push_front() :- This function is used to insert the element at the first position on forward list. The value from this function is copied to the space before first element in the container. The size of forward list increases by 1.
      * emplace_front() :- This function is similar to the previous function but in this no copying operation occurs, the element is created directly at the memory before the first element of the forward list.
      * pop_front() :- This function is used to delete the first element of list.
      * insert_after() This function gives us a choice to insert elements at any position in forward list. The arguments in this function are copied at the desired position.
      * emplace_after() This function also does the same operation as above function but the elements are directly made without any copy operation.
      * erase_after() This function is used to erase elements from a particular position in the forward list.
      * remove() :- This function removes the particular element from the forward list mentioned in its argument.
      * remove_if() :- This function removes according to the condition in its argument.
      * splice_after() :- This function transfers elements from one forward list to other.
      * front()– This function is used to reference the first element of the forward list container.
      * begin()– begin() function is used to return an iterator pointing to the first element of the forward list container.
      * end()– end() function is used to return an iterator pointing to the last element of the list container.
      * cbegin()– Returns a constant iterator pointing to the first element of the forward_list.
      * cend()– Returns a constant iterator pointing to the past-the-last element of the forward_list.
      * before_begin()– Returns a iterator which points to the position before the first element of the forward_list.
      * cbefore_begin()– Returns a constant random access iterator which points to the position before the first element of the forward_list.
      * max_size()– Returns the maximum number of elements can be held by forward_list.
      * resize()– Changes the size of forward_list. 
      * merge() :- This function is used to merge one forward list with other. If both the lists are sorted then the resulted list returned is also sorted.
      * operator “=” :- This operator copies one forward list into other. The copy made in this case is deep copy.
      * sort() :- This function is used to sort the forward list.
      * unique() :- This function deletes the multiple occurrences of a number and returns a forward list with unique elements. The forward list should be sorted for this function to execute successfully.
      * reverse() :- This function is used to reverse the forward list.
      * swap() :- This function swaps the content of one forward list with other.
      * clear() :- This function clears the contents of forward list. After this function, the forward list becomes empty.
      * empty() :- This function returns true if the list is empty otherwise false.

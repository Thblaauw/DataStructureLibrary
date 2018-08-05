#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "Node.h"

template<typename T>
class LinkedList {
	
private:
	Node<T>* head;
	Node<T>* tail;

	int behavior;
	//0 behave as a queue
	//1 behave as a stack

public:
	LinkedList();
	LinkedList(int);
	~LinkedList();

	LinkedList<T>& insert(const T&);
	LinkedList<T>& pop();
	LinkedList<T>& remove(T&);

	void sort();

	void setBehavior(int);
	int getBehavior();

	void printList();
};

#include "LinkedList.cpp"
#endif // !LINKEDLIST_H

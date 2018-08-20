#ifndef LINKEDLIST_H
#define LINKEDLIST_H

#include "../Node/Node.h"

template<class T>
class LinkedList {
	
private:
	Node<T>* head;
	Node<T>* tail;

	int behavior;
	//0 behave as a queue
	//1 behave as a stack

public:
	//--------------------------------------
	//		Constructors and Destructors
	//--------------------------------------
	LinkedList();
	LinkedList(int);
	~LinkedList();

	//--------------------------------------
	//		Base Functions
	//--------------------------------------
	LinkedList<T>& insert(const T&);
	LinkedList<T>& pop();
	LinkedList<T>& remove(const T&);
	Node<T>& getNode(const T&);
	void sort();
	void setBehavior(int);
	int getBehavior();
	void printList();
};

#include "LinkedList.cpp"
#endif // !LINKEDLIST_H

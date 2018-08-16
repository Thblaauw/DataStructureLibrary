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
	/**
		Contructor of the linked list

		@param void
		@return void
	*/
	LinkedList();

	/**
		Constructor that sets the behavior of the linked list:
		0 - behaves as a queue
		1 - behaves as a stack

		@param int
		@return void
	*/
	LinkedList(int);
	~LinkedList();

	/**
		Inserts an item to the linked according to proper behavior

		@param Reference to the item to be added
		@return Reference to the linked list
	*/
	LinkedList<T>& insert(const T&);

	/**
		Pop the linked list according to proper behavior

		@param void
		@return
	*/
	LinkedList<T>& pop();

	/**
		Remove one specific node from the linked list

		@param Reference to the data
		@return Reference to the linked list
	*/
	LinkedList<T>& remove(const T&);

	/**
	Returns the node in which the data passed is present

	@param Reference to the data
	@return Reference to the node
	*/
	Node<T>& getNode(const T&);

	/**
		Sorts the linked list

		@param void
		@return void
	*/
	void sort();

	/**
		Sets the behavior of the linked list on run-time
		0 - behaves as a queue
		1 - behaves as a stack

		@param int
		@return void
	*/
	void setBehavior(int);

	/**
		Gets the behavior of the linked list on run-time
		0 - behaves as a queue
		1 - behaves as a stack

		@param void
		@return int
	*/
	int getBehavior();

	/**
		Prints the whole list sequentially. Objects stored must have a print function

		@param void
		@return void
	*/
	void printList();
};

#include "LinkedList.cpp"
#endif // !LINKEDLIST_H

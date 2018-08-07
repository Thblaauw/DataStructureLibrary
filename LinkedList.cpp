#ifndef LINKEDLIST_CPP
#define LINKEDLIST_CPP

#include "LinkedList.h"

/**
	Contructor of the linked list

	@param void
	@return void
*/
template<typename T>
LinkedList<T>::LinkedList(): head(nullptr), tail(nullptr), behavior(0) {
	//Standart behavior is a queue;
}
/**
	Constructor that sets the behavior of the linked list:
		0 - behaves as a queue
		1 - behaves as a stack

	@param int
	@return void
*/
template<typename T>
LinkedList<T>::LinkedList(int b): head(nullptr), tail(nullptr), behavior(b) {
}

template<typename T>
LinkedList<T>::~LinkedList() {
	Node<T>* iterator = head;
	while (iterator == nullptr) {
		Node<T>* nodeToBeDeleted = iterator;
		delete nodeToBeDeleted;
		iterator = iterator->getNextNode();
	}
}

/**
	Inserts an item to the linked according to proper behavior

	@param Reference to the item to be added
	@return Reference to the linked list
*/
template<typename T>
LinkedList<T>& LinkedList<T>::insert(const T& data) {

	Node<T> *newNode = new Node<T>(data);
	
	if (head == nullptr){
		this->head = newNode;
		this->tail = newNode;
	}
	else {
		newNode->setPrevNode(tail);
		this->tail->setNextNode((newNode));
		this->tail = newNode;
	}
	
	return *(this);
}

/**
	Pop the linked list according to proper behavior

	@param void
	@return
*/
template<typename T>
LinkedList<T>& LinkedList<T>::pop() {

	if (this->behavior == 0){// behaves as a Queue
		if (head != nullptr) {
			Node<T> *removedNode = this->head;
			this->head = this->head->getNextNode();
			//delete removedNode;
		}
	}
	if (this->behavior == 1) {// behaves as a Stack
		if (head != nullptr) {
			Node<T> *removedNode = this->head;
			this->head = this->head->getNextNode();
			//delete removedNode;
		}
	}
	return *(this);
}

/**
	Sorts the linked list

	@param void
	@return void
*/
template<typename T>
void LinkedList<T>::sort() {
	Node<T> newHead = nullptr;
	Node<T> iteratorOfUnsorted = head;
	Node<T> iteratorOfSorted = nullptr;

	
}

/**
	Sets the behavior of the linked list on run-time
		0 - behaves as a queue
		1 - behaves as a stack

	@param int
	@return void
*/
template<typename T>
void LinkedList<T>::setBehavior(int b) {
	if(b == 0 || b == 1)
		this->behavior = b;
}

/**
	Gets the behavior of the linked list on run-time
		0 - behaves as a queue
		1 - behaves as a stack

	@param void
	@return int
*/
template<typename T>
int LinkedList<T>::getBehavior() {
	return this->behavior;
}

/**
	Prints the whole list sequentially. Objects stored must have a print function

	@param void
	@return void
*/
template<typename T>
void LinkedList<T>::printList() {
	Node<T> *iterator;
	iterator = head;

	while (iterator != nullptr)
	{
		iterator->print();
		iterator = iterator->getNextNode();
	}
}

#endif
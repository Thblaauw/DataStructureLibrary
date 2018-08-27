#ifndef LINKEDLIST_CPP
#define LINKEDLIST_CPP

#include "LinkedList.h"

/**
	Contructor of the linked list

	@param void
	@return void
*/
template<class T>
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
template<class T>
LinkedList<T>::LinkedList(int b): head(nullptr), tail(nullptr), behavior(b) {
}

template<class T>
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
template<class T>
LinkedList<T>& LinkedList<T>::insert(const T& data) {

	Node<T> *newNode = new Node<T>(data);
	
	if (head == nullptr){
		this->head = newNode;
		this->tail = newNode;
	}
	else {
		newNode->setPrevNode(tail);
		tail->setNextNode(newNode);
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
template<class T>
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
Remove one specific node from the linked list

@param Reference to the data
@return Reference to the linked list
*/
template<class T>
LinkedList<T>& LinkedList<T>::remove(const T& data) {
	Node<T> *iterator = &(this->getNode(data));
	if (iterator->getNextNode() == nullptr) {// if tail
		iterator->getPrevNode()->setNextNode(nullptr);
		tail = iterator->getPrevNode();
	}
	else if (iterator->getPrevNode() == nullptr) {// if head
		iterator->getNextNode()->setPrevNode(nullptr);
		head = iterator->getNextNode();
	}
	else if (iterator->getPrevNode() == nullptr && iterator->getNextNode() == nullptr) {// if only node
		head = tail = nullptr;
	}
	else {// if node in the middle
		iterator->getNextNode()->setPrevNode(iterator->getPrevNode());
		iterator->getPrevNode()->setNextNode(iterator->getNextNode());
	}
	delete iterator;
	iterator = nullptr;
	
	return *this;
}

/**
	Returns the node in which the data passed is present

	@param Reference to the data
	@return Reference to the node
*/
template<class T>
Node<T>& LinkedList<T>::getNode(const T& data) {
	Node<T> *iterator = head;
	while (iterator != nullptr || iterator->getData() == data) {
		if (iterator->getData() == data) {
			return *iterator;
		}
		else
			iterator = iterator->getNextNode();
	}
	return *(new Node<T>);
}

/**
	Sorts the linked list

	@param void
	@return void
*/
template<class T>
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
template<class T>
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
template<class T>
int LinkedList<T>::getBehavior() {
	return this->behavior;
}

/**
	Prints the whole list sequentially. Objects stored must have a print function

	@param void
	@return void
*/
template<class T>
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
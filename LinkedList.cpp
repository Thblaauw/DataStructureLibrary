#ifndef LINKEDLIST_CPP
#define LINKEDLIST_CPP

#include "LinkedList.h"

template<class T>
LinkedList<T>::LinkedList(): head(nullptr), tail(nullptr), behavior(0) {
	//Standart behavior is a queue;
}

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

template<class T>
LinkedList<T>& LinkedList<T>::add(T& data) {

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


template<class T>
void LinkedList<T>::sort() {
	Node<T> newHead = nullptr;
	Node<T> iteratorOfUnsorted = head;
	Node<T> iteratorOfSorted = nullptr;

	
}

template<class T>
void LinkedList<T>::setBehavior(int b) {
	if(b == 0 || b == 1)
		this->behavior = b;
}

template<class T>
int LinkedList<T>::getBehavior() {
	return this->behavior;
}

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
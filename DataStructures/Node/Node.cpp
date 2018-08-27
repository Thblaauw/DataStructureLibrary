#ifndef NODE_CPP
#define NODE_CPP

#include "Node.h"
#include <iostream>

/**
	Node constructor

	@param void
	@return void
*/
template<class T>
Node<T>::Node() {
	this->data = nullptr;
	this->nextPtr = nullptr;
	this->prevPtr = nullptr;
}

/**
	Node constructor

	@param Reference to the object/class stored in the node
	@return void
*/
template<class T>
Node<T>::Node(const T& info){
	this->data = new T(info);
	this->nextPtr = nullptr;
	this->prevPtr = nullptr;
}


template<class T>
Node<T>::~Node() {
	delete this->data;
	//delete this->nextPtr;
	//delete this->prevPtr;
}


/**
	Sets the next node linked to this one

	@param Pointer to the next node
	@return void
*/
template<class T>
void Node<T>::setNextNode(Node<T>* n) {
	this->nextPtr = n;
}


/**
	Gets a pointer to the next node

	@param void
	@return Pointer to the next node
*/
template<class T>
Node<T>* Node<T>::getNextNode() {
	return nextPtr;
}

/**
	Sets the previous node linked to this one

	@param Pointer to the previous node
	@return void
*/
template<class T>
void Node<T>::setPrevNode(Node<T>* n) {
	this->prevPtr = n;
}

/**
	Gets a pointer to the previous node

	@param void
	@return Pointer to the previous node
*/
template<class T>
Node<T>* Node<T>::getPrevNode() {
	return prevPtr;
}

/**
	Changes the data stored in the node

	@param Reference to the data
	@return void
*/
template<class T>
void Node<T>::setData(T info) {
	this->data = &info;
}

/**
	Return a reference to the data stored in the node

	@param void
	@return Reference to the data stored
*/
template<class T>
T& Node<T>::getData(){
	return *data;
}

/**
	Prints the data stored in the node. All Objects or class must have a print function

	@param void
	@return void
*/
template<class T>
void Node<T>::print() {
	this->data->printRectangle();
}

template<class T>
bool Node<T>::operator==(Node<T>& b) const {
	return this->data == b.getData();
}

template<class T>
bool Node<T>::operator!=(Node<T>& b) const {
	return this->data != b.getData();
}

template<class T>
bool Node<T>::operator>(Node<T>& b) const {
	return this->data > b.getData();
}

template<class T>
bool Node<T>::operator<(Node<T>& b) const {
	return this->data < b.getData();
}


template<class T>
bool Node<T>::operator>=(Node<T>& b) const {
	return this->data >= b.getData();
}

template<class T>
bool Node<T>::operator<=(Node<T>& b) const {
	return this->data <= b.getData();
}
#endif
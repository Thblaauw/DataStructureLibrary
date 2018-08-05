#ifndef NODE_CPP
#define NODE_CPP

#include "Node.h"
#include <iostream>

template<class T>
Node<T>::Node() {
	this->data = nullptr;
	this->nextPtr = nullptr;
	this->prevPtr = nullptr;
}

template<class T>
Node<T>::Node(const T& info): data(&info){
	//this->data = &info;
	this->nextPtr = nullptr;
	this->prevPtr = nullptr;
}

template<class T>
Node<T>::~Node() {
	//delete this->data;
	delete this->nextPtr;
	delete this->prevPtr;
}

template<class T>
void Node<T>::setNextNode(Node<T>* n) {
	this->nextPtr = n;
}

template<class T>
Node<T>* Node<T>::getNextNode() {
	return nextPtr;
}

template<class T>
void Node<T>::setPrevNode(Node<T>* n) {
	this->prevPtr = n;
}

template<class T>
Node<T>* Node<T>::getPrevNode() {
	return prevPtr;
}

template<class T>
void Node<T>::setData(T info) {
	this->data = &info;
}

template<class T>
const T& Node<T>::getData(){
	return *data;
}
template<class T>
void Node<T>::print() {
	this->data->printRectangle();
}

#endif
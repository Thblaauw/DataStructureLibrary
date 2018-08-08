#ifndef NODE_H
#define NODE_H

template<class T>
class Node{

private:
	T *data;

	Node<T>* nextPtr;
	Node<T>* prevPtr;
public:
	/**
		Node constructor

		@param void
		@return void
	*/
	Node();

	/**
		Node constructor

		@param Reference to the object/class stored in the node
		@return void
	*/
	Node(const T&);
	~Node();

	/**
		Sets the next node linked to this one

		@param Pointer to the next node
		@return void
	*/
	void setNextNode(Node<T>*);

	/**
		Gets a pointer to the next node

		@param void
		@return Pointer to the next node
	*/
	Node<T>* getNextNode();

	/**
		Sets the previous node linked to this one

		@param Pointer to the previous node
		@return void
	*/
	void setPrevNode(Node<T>*);

	/**
		Gets a pointer to the previous node

		@param void
		@return Pointer to the previous node
	*/
	Node<T>* getPrevNode();

	/**
		Changes the data stored in the node

		@param Reference to the data
		@return void
	*/
	void setData(T);

	/**
		Return a reference to the data stored in the node

		@param void
		@return Reference to the data stored
	*/
	T& getData();

	/**
		Prints the data stored in the node. All Objects or class must have a print function

		@param void
		@return void
	*/
	void print();
};


#include "Node.cpp"

#endif // !NODE_H
#ifndef NODE_H
#define NODE_H

template<class T>
class Node{

private:
	T *data;

	Node<T>* nextPtr;
	Node<T>* prevPtr;
public:
	//--------------------------------------
	//		Constructors and Destructors
	//--------------------------------------
	Node();
	Node(const T&);
	~Node();

	//--------------------------------------
	//		NextNode - Getters and Setters
	//--------------------------------------
	void setNextNode(Node<T>*);
	Node<T>* getNextNode();

	//--------------------------------------
	//		PrevNode - Getters and Setters
	//--------------------------------------
	void setPrevNode(Node<T>*);
	Node<T>* getPrevNode();

	//--------------------------------------
	//		Data - Getters and Setters
	//--------------------------------------
	void setData(T);
	T& getData();
	
	//--------------------------------------
	//		Base Functions
	//--------------------------------------
	void print();
};


#include "Node.cpp"

#endif // !NODE_H
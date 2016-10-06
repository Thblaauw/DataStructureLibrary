#ifndef NODE_H
#define NODE_H

template<class T>
class Node{

private:
	T *data;

	Node<T>* nextPtr;
	Node<T>* prevPtr;
public:
	Node();
	Node(T&);
	~Node();

	void setNextNode(Node<T>*);
	Node<T>* getNextNode();

	void setPrevNode(Node<T>*);
	Node<T>* getPrevNode();

	void setData(T);
	T& getData();
	void print();
};
#include "Node.cpp"

#endif // !NODE_H
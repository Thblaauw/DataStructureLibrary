#ifndef BINARY_TREE_CPP
#define BINARY_TREE_CPP

#include "Node.h"

template <class T>
class BinaryTree{

protected:
	Node<T>* root;
public:
	BinaryTree();
	~BinaryTree();

	bool insert(const T&);
	BinaryTree<T>& remove(const T&);
	bool isEmpty();
	bool contains(T&);

protected:
	void in_order_traverse(Node<T>& node, void function(Node<T>& n));
};

#include "BinaryTree.cpp"
#endif

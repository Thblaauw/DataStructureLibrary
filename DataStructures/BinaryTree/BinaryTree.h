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

	/**
	Add the parameter to the binary tree and returns the binary tree to allow cascading

	@param Element to be added
	@return The binary tree
	*/
	BinaryTree<T>& insert(const T&);

	/**
	Remove the node that contains the data passed, re-organize the treeand return the binary tree to allow cascading

	@param Data to be removed
	@return The binary tree
	*/
	BinaryTree<T>& remove(const T&);

	/**
	This function checks if the binary tree is empty

	@param none
	@return Boolean
	*/
	bool isEmpty();

	/**
	Checks if the data passed exists in the binary tree

	@param Data to be checked
	@return Boolean
	*/
	bool contains(T&);

protected:
	void in_order_traverse(Node<T>& node, void function(Node<T>& n));
	void del_node(Node<T>& n);
};

#include "BinaryTree.cpp"
#endif

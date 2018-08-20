#ifndef BINARY_TREE_CPP
#define BINARY_TREE_CPP

#include "../Node/Node.h"

template <class T>
class BinaryTree{

protected:
	Node<T>* root;
public:
	//--------------------------------------
	//		Constructors and Destructors
	//--------------------------------------
	BinaryTree();
	~BinaryTree();

	//--------------------------------------
	//		Base Functions
	//--------------------------------------
	BinaryTree<T>& insert(const T&);
	BinaryTree<T>& remove(const T&);
	bool isEmpty();
	bool contains(T&);

	//--------------------------------------
	//		Traverse Functions
	//--------------------------------------
	void in_order_traverse(void function(Node<T>* n)) const;
	void post_order_traverse(void function(Node<T>* n)) const;
	void pre_order_traverse(void function(Node<T>* n)) const;

protected:
	//--------------------------------------
	//		Traverse Helpers
	//--------------------------------------
	void in_order_traverse_helper(Node<T>* node, void function(Node<T>* n)) const ;
	void post_order_traverse_helper(Node<T>* node, void function(Node<T>* n)) const;
	void pre_order_traverse_helper(Node<T>* node, void function(Node<T>* n)) const;
	static void del_node(Node<T>* n);
};

#include "BinaryTree.cpp"
#endif

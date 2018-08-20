#ifndef BINARY_TREE
#define BINARY_TREE

#include "BinaryTree.h"

/**
	Creates the root of the binary tree and sets an empty node as the root

	@param none
	@return none
*/
template <class T>
BinaryTree<T>::BinaryTree() {
}

/**
	Add the parameter to the binary tree and returns the binary tree to allow cascading

	@param Element to be added
	@return The binary tree
*/
template <class T>
BinaryTree<T>& BinaryTree<T>::insert(const T& data) {
	/*
		This function will consider the "nextPtr" of the done to be bigger than the node
		and will consider the "prevPtr" of the node to be smaller than the node
	*/
	if (root == nullptr ) {
		Node<T> *item_to_be_added = new Node<T>(data);
		this->root = item_to_be_added;
		return *this;
	}

	Node<T> *item_to_be_added = new Node<T>(data);
	Node<T> *iterator = root;
	while (iterator != nullptr) {
		if (item_to_be_added->getData() > iterator->getData()) {
			if (iterator->getNextNode() == nullptr) {
				iterator->setNextNode(item_to_be_added);
				iterator = nullptr;
			}
			else
				iterator = iterator->getNextNode(); //moves to the right
		}
		else if (item_to_be_added->getData() < iterator->getData()) {
			if (iterator->getPrevNode() == nullptr) {
				iterator->setPrevNode(item_to_be_added);
				iterator = nullptr;
			}
			else
				iterator = iterator->getPrevNode(); //moves to the left
		}
		else // it is equal, so it already contains
			return *this;	
	}

	return *this;
}

/**
	Remove the node that contains the data passed, re-organize the treeand return the binary tree to allow cascading

	@param Data to be removed
	@return The binary tree
*/
template <class T>
BinaryTree<T>& BinaryTree<T>::remove(const T& data) {
	/*
		This function will consider the "nextPtr" of the done to be bigger than the node
		and will consider the "prevPtr" of the node to be smaller than the node
	*/
	Node<T> *iterator = root;
	Node<T> *iterator_parent = nullptr; // this will be the parent node of which the iterator is in
	while(iterator != nullptr){
		if (iterator->getData() == data) {//found the item
			if (iterator->getNextNode() == nullptr && iterator->getPrevNode() == nullptr) {// The node to be removed is a leaf
				if (data > iterator_parent->getData())
					iterator_parent->setNextNode(nullptr);
				else
					iterator_parent->setPrevNode(nullptr);
				delete iterator;
				iterator = nullptr;
			}
			else if (iterator->getNextNode() == nullptr) {// only left subtree
				iterator_parent->setPrevNode(iterator->getPrevNode());
				//delete iterator;
				delete iterator;
				iterator = nullptr;
			}
			else if (iterator->getPrevNode() == nullptr) { // only right subtree
				iterator_parent->setNextNode(iterator->getNextNode());
				delete iterator;
				iterator = nullptr;
			}
			else { // left and right subtree
				iterator_parent = iterator;
				iterator = iterator->getNextNode(); // move to the right once
				while (iterator->getPrevNode() != nullptr)
					iterator = iterator->getPrevNode();
				iterator_parent->setData(iterator->getData());
				delete iterator;
				iterator = nullptr;
			}
		}
		else if(iterator->getData() < data){
			iterator_parent = iterator;
			iterator = iterator->getNextNode();//move to the right
		}
		else { //if(iterator->getData() > data)
			iterator_parent = iterator;
			iterator = iterator->getPrevNode();//move to the left
		}
	}
	
	return *this;
}

/**
	Checks if the data passed exists in the binary tree

	@param Data to be checked
	@return Boolean
*/
template <class T>
bool BinaryTree<T>::contains(T& data) {
	Node<T> *iterator = root;
	if (iterator == nullptr)//checks for null root
		return false;

	while (iterator != nullptr) {
		if (iterator->getData() == data)
			return true;
		if (iterator->getData() < data)
			iterator = iterator->getNextNode();
		else
			iterator = iterator->getPrevNode();
	}
	//if this loop ends, the data passed is not on the tree
	return false;
}

/**
	This function checks if the binary tree is empty

	@param none
	@return Boolean
*/
template<class T>
bool BinaryTree<T>::isEmpty() {
	return root == nullptr;
}

/**
	Helper function that iterates the binary tree recursively and executes any fucntion that returns void and
	takes a Node as parameter in every node of the binary tree. 

	@param pointer Node<T>, void function(Node<T>*)
	@return void
*/
template <class T>
void BinaryTree<T>::in_order_traverse_helper(Node<T>* node, void function(Node<T>* n)) const{
	if (node == nullptr)
		return;
	else {
		in_order_traverse(node->getPrevNode(), function);
		function(node);
		in_order_traverse(node->getNextNode(), function);
	}
}

/**
	Helper function that iterates the binary tree recursively and executes any fucntion that returns void and
	takes a Node as parameter in every node of the binary tree.

	@param pointer Node<T>, void function(Node<T>*)
	@return void
*/
template <class T>
void BinaryTree<T>::post_order_traverse_helper(Node<T>* node, void function(Node<T>* n)) const {
	if (node == nullptr)
		return;
	else {
		post_order_traverse_helper(node->getPrevNode(), function);
		post_order_traverse_helper(node->getNextNode(), function);
		function(node);
	}
}

/**
	Helper function that iterates the binary tree recursively and executes any fucntion that returns void and
	takes a Node as parameter in every node of the binary tree.

	@param pointer to Node<T>, void function(Node<T>*)
	@return void
*/
template <class T>
void BinaryTree<T>::pre_order_traverse_helper(Node<T>* node, void function(Node<T>* n)) const {
	if (node == nullptr)
		return;
	else {
		function(node);
		pre_order_traverse_helper(node->getPrevNode(), function);
		pre_order_traverse_helper(node->getNextNode(), function);
	}
}

/**
	Iterates the binary tree recursively and executes any fucntion that returns void and
	takes a Node as parameter in every node of the binary tree.

	@param  void function(Node<T>*)
	@return void
*/
template <class T>
void BinaryTree<T>::in_order_traverse(void function(Node<T>* n)) const {
	this->in_order_traverse_helper(function);
}

/**
	Iterates the binary tree recursively and executes any fucntion that returns void and
	takes a Node as parameter in every node of the binary tree.

	@param  void function(Node<T>*)
	@return void
*/
template <class T>
void BinaryTree<T>::post_order_traverse(void function(Node<T>* n)) const {
	this->post_order_traverse_helper;
}

/**
	Iterates the binary tree recursively and executes any fucntion that returns void and
	takes a Node as parameter in every node of the binary tree.

	@param  void function(Node<T>*)
	@return void
*/
template <class T>
void BinaryTree<T>::pre_order_traverse(void function(Node<T>* n)) const {
	this->pre_order_traverse;
}

/**
	Iterate trough the tree and delete every node

	@param None
	@return None
*/
template <class T>
BinaryTree<T>::~BinaryTree() {
	//TODO: Fix the call of a function. Maybe it hs to be public
	BinaryTree<T>::post_order_traverse_helper(root, (this->del_node));
}

template <class T>
void BinaryTree<T>::del_node(Node<T>* n) {
	delete n;
}
#endif // BINARY_TREE





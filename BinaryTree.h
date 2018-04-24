#ifndef BINARY_TREE_CPP
#define BINARY_TREE_CPP

template <class T>
class BinaryTree{

protected:
	Node<T>* root;
public:
	BinaryTree();
	~BinaryTree();

	BinaryTree<T>& add(T&);
	BinaryTree<T>& remove(T&);
	bool isEmpty();
	bool conains(T&);
}
#endif

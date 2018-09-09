#ifndef HashMap_H
#define HashMap_H

#include <string>

//#include "../BinaryTree/BinaryTree.h"
#include "../LinkedList/LinkedList.h"
#include "../HashNode/HashNode.h"

template <class Key = int, class Value = int, class Structure = LinkedList<HashNode<Key, Value>>>
class HashMap {
protected:
	const int SIZE;
	//BinaryTree<HashNode<Key, Value>> * table;
	Structure * table;

public:
	//---------------------------------------
	//		Constructors and Destructors
	//---------------------------------------
	HashMap();
	HashMap(int);
	~HashMap();

	//---------------------------------------
	//		Base Functions
	//---------------------------------------
	HashMap& insert(const Key&, const Value&);
	Value& get_value(const Key&);
	HashMap& set_Value(const Key&, const Value&);
	HashMap& remove(const Key&, const Value&);
protected:
	//---------------------------------------
	//		Hashing Functions
	//---------------------------------------
	int hash_number(const Key&);
	int hash(const int);
	int hash(const char);
	int hash(const float);
	int hash(const double);
	int hash(const std::string);
};

#include "HashMap.cpp"
#endif // !HashMap_H


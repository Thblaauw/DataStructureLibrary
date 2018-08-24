#ifndef HASHTABLE_H
#define HASHTABLE_H

#include <string>

//#include "../BinaryTree/BinaryTree.h"
#include "../LinkedList/LinkedList.h"
#include "../HashNode/HashNode.h"

template <class Key = int, class Value = int, class Structure = LinkedList<HashNode<Key, Value>>>
class HashTable {
protected:
	const int SIZE;
	//BinaryTree<HashNode<Key, Value>> * table;
	Structure * table;

public:
	HashTable();
	HashTable(int);
	~HashTable();

	HashTable& insert(const Key&, const Value&);
	Value& get_value(const Key&);
	HashTable& set_Value(const Key&, const Value&);
	HashTable& remove(const Key&, const Value&);
protected:
	int hash_number(const Key&);
	int hash(const int);
	int hash(const char);
	int hash(const float);
	int hash(const double);
	int hash(const std::string);
};

#include "HashTable.cpp"
#endif // !HASHTABLE_H


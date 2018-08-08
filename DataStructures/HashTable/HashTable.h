#ifndef HASHTABLE_H
#define HASHTABLE_H

#include "LinkedList.h"
#include "HashNode.h"

template <class Key, class Value, class Structure = LinkedList<HashNode<Key, Value>>>
class HashTable {
protected:
	const int SIZE;
	Structure * table;

public:
	HashTable();
	HashTable(int);
	~HashTable();

	HashTable& insert(const Key&, const Value&);
	Value& get_value(const Key&);
	HashTable& set_Value(const Key&, const Value&);
	HashTable& remove(const Key&, const Value&);
};

#endif // !HASHTABLE_H


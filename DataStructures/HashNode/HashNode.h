#ifndef HASHNODE_H
#define HASHNODE_H

template <class Key, class Value>
class HashNode {

private:
	const Key* key;
	const Value* value;

public:
	HashNode(const Key&, const Value&);
	~HashNode();

	Key& get_key();
	HashNode& set_key(const Key&);

	Value& get_value();
	HashNode& set_key(const Value&);
	
};

#include "HashNode.h"

#endif // !HASHNODE_H
